#include "game.h"

void menu()
{
	printf("************************\n");
	printf("*** Welcome to Paly! ***\n");
	printf("*** 1.Paly    2.exit ***\n");
	printf("************************\n");
}

void game()
{
	char arr[ROW][COL] = { 0 };
	InitPaly(arr, ROW, COL);
	PrintBoard(arr, ROW, COL);
	//int count = ROW * COL * sizeof(arr[0][0]);
	while (1)
	{
		ManPaly(arr, ROW, COL);
		int ret = IsFull(arr, ROW, COL);
		if (ret == 0)
		{
			CompterPaly(arr, ROW, COL);
			PrintBoard(arr, ROW, COL);
			int a = CheakWin(arr, ROW, COL);
			if (a == 1)
			{
				printf("You Win!\n");
				break;
			}
			else if (a == 0)
			{
				printf("It's a pity! You lost!\n");
				break;
			}
			else
			{
				continue;
			}
		}
		else
		{
			PrintBoard(arr, ROW, COL);
			printf("Board is full.It's flat!\n");
			break;
		}
	}
}

int main()
{
	while (1)
	{
		menu();
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("Bey!\n");
			break;
		default:
			printf("Error! Please again:\n");
			break;
		}
	}
	system("pause");
	return 0;
}