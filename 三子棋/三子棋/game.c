#include"game.h"

void dispaly(char arr1[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr1[i][j] = ' ';
		}
	}
}
void input_board(char arr1[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------------------\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr1[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0; j < row; j++)
		{
			if (i < row - 1)
			{
				printf("--- ");
			}
		}
		printf("\n");
	}
}
void man_paly(char arr1[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("请输入坐标：\n");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= 3 && j >= 1 && j <= 3)
		{
			if (arr1[i - 1][j - 1] == ' ')
			{
				arr1[i - 1][j - 1] = 'X';
				break;
			}
			else
			{
				printf("该位置被占\n");
			}
		}
		else
		{
			printf("输入有误\n");
		}
	}
}
void computer_paly(char arr1[ROW][COL], int row, int col)
{
	while (1)
	{
		srand((unsigned int)time(NULL));
		int i = rand() % row;
		int j = rand() % col;
		if (arr1[i][j] == ' ')
		{
			arr1[i][j] = 'O';
			break;
		}
	}
}
int is_full(char arr1[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr1[i][j] == 'X'&&arr1[i][j] == 'O')
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
}
int cheak_win(char arr1[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr1[0][0] == 'X'&&arr1[0][1] == 'X'&&arr1[0][2] == 'X' ||
				arr1[1][0] == 'X'&&arr1[1][1] == 'X'&&arr1[1][2] == 'X' ||
				arr1[2][0] == 'X'&&arr1[2][1] == 'X'&&arr1[2][2] == 'X' ||
				arr1[0][0] == 'X'&&arr1[1][1] == 'X'&&arr1[2][2] == 'X' ||
				arr1[2][0] == 'X'&&arr1[1][1] == 'X'&&arr1[0][2] == 'X')
			{
				return 1;
			}
			if (arr1[0][0] == 'O'&&arr1[0][1] == 'O'&&arr1[0][2] == 'O' ||
				arr1[1][0] == 'O'&&arr1[1][1] == 'O'&&arr1[1][2] == 'O' ||
				arr1[2][0] == 'O'&&arr1[2][1] == 'O'&&arr1[2][2] == 'O' ||
				arr1[0][0] == 'O'&&arr1[1][1] == 'O'&&arr1[2][2] == 'O' ||
				arr1[2][0] == 'O'&&arr1[1][1] == 'O'&&arr1[0][2] == 'O')
			{
				return 0;
			}
		}
	}
}

