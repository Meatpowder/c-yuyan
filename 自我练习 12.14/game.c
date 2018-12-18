#include "game.h"

void InitPaly(char arr[ROW][COL], int row, int col)
{
	memset(arr, ' ', row*col * sizeof(arr[0][0]));
}

void PrintBoard(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("-----------");
		}
		printf("\n");
	}
}

void ManPaly(char arr[ROW][COL], int row, int col)
{
	printf("Please input:");
	while (1)
	{
		int i = 0;
		int j = 0;
		scanf("%d %d", &i, &j);
		if ((i >= 1 && i <= 3) && (j >= 1 && j <= 3))
		{
			if (arr[i - 1][j - 1] == ' ')
			{
				arr[i - 1][j - 1] = 'X';
				break;
			}
			else
			{
				printf("This position has been occupied.Please input again:\n");
			}
		}
		else
		{
			printf("Erorr!Please input two numbers form 1 to 3.\n");
		}
	}
	
}

void CompterPaly(char arr[ROW][COL], int row, int col)
{
	while (1)
	{
		srand((unsigned int)time(NULL));
		int i = rand() % row;
		int j = rand() % col;
		if (arr[i][j] == ' ')
		{
			arr[i][j] = 'O';
			break;
		}
	}
}

int IsFull(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
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

int CheakWin(char arr[ROW][COL], int row, int col)
{
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X' ||
		arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X' ||
		arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X' ||
		arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X' ||
		arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X' ||
		arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X' ||
		arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X' ||
		arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X')
	{
		return 1;
	}
	if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' ||
		arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' ||
		arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' ||
		arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O' ||
		arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O' ||
		arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O' ||
		arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' ||
		arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O')
	{
		return 0;
	}
}