

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
			printf("��һ�ʤ\n");
			break;
		}
		else if (a == 0)
		{
			printf("���Ի�ʤ\n");
			break;
		}
	}
	printf("��Ϸ����");
	


}
void menu()
{
	printf("**************************\n");
	printf("****  ��ӭ����������  ****\n");
	printf("****   1. paly        ****\n");
	printf("****   0. exit        ****\n");
	printf("**************************\n");
}
int main()
{
	do
	{
		menu();
		printf("��ѡ��");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("����������������룺");
			break;
		}
	} while (1);
		system("pause");
	return 0;
}