#include<stdio.h>
#include<Windows.h>

//int main()
//{
//	int arr[10] = { 3, 5, 4, 4, 3, 1, 8, 3, 5, 4 };
//	int i = 0;
//	int j = 0;
//	printf("the odd:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = (1 + i); j < 9 - i;)
//		{
//			arr[j ] ^= arr[j + 1];
//			arr[j + 1] ^= arr[j ];
//			arr[j ] ^= arr[j + 1];
//			j += 2;
//		}
//	}
//	printf("\n");
//	printf("the new:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//void YangSearch(int arr[3][4], int key, int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (; i < row;)
//	{
//		if (ret == 1)
//		{
//			break;
//		}
//		for (j = col - 1; j >= 0;)
//		{
//			if (arr[i][j] == key)
//			{
//				printf("Find it.It's %d\n", arr[i][j]);
//				ret += 1;
//				break;
//			}
//			else if (arr[i][j] < key)
//			{
//				i++;
//				break;
//			}
//			else
//			{
//				j--;
//			}
//		}
//	}
//	if (i >= row || j < 0)
//	{
//		printf("Don't find.\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6} };
//	int key = 5;
//	YangSearch(arr, key, 3 , 4);
//	system("pause");
//	return 0;
//}