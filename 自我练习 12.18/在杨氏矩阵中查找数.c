void YangSearch(int arr[3][4], int key, int row, int col)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (; i < row;)
	{
		if (ret == 1)
		{
			break;
		}
		for (j = col - 1; j >= 0;)
		{
			if (arr[i][j] == key)
			{
				printf("Find it.It's %d\n", arr[i][j]);
				ret += 1;
				break;
			}
			else if (arr[i][j] < key)
			{
				i++;
				break;
			}
			else
			{
				j--;
			}
		}
	}
	if (i >= row || j < 0)
	{
		printf("Don't find.\n");
	}
}

int main()
{
	int arr[3][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6} };
	int key = 5;
	YangSearch(arr, key, 3, 4);
	system("pause");
	return 0;
}