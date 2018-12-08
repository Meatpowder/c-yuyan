

#include"game.h"
void game()
{
	char arr1[ROW][COL] = { 0 };
	dispaly(arr1, ROW, COL);
	input_board(arr1, ROW, COL);
	while (1)
	{
		man_paly(arr1, ROW, COL);
		int ret = is_full(arr1, ROW, COL);
		if (ret == 0)
		{
			input_board(arr1, ROW, COL);
			break;
		}
		else
			computer_paly(arr1, ROW, COL);
		input_board(arr1, ROW, COL);
		int a = cheak_win(arr1, ROW, COL);
		if (a == 1)
		{
			printf("玩家获胜\n");
			break;
		}
		else if (a == 0)
		{
			printf("电脑获胜\n");
			break;
		}
	}
	printf("游戏结束");
	


}
void menu()
{
	printf("**************************\n");
	printf("****  欢迎来到三子棋  ****\n");
	printf("****   1. paly        ****\n");
	printf("****   0. exit        ****\n");
	printf("**************************\n");
}
int main()
{
	do
	{
		menu();
		printf("请选择：");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (1);
		system("pause");
	return 0;
}