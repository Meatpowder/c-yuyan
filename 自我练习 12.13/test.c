#include<stdio.h>
#include<Windows.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][4] = { 0 };
//	for (; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//void BubbleSort(int arr[], int sz)//������Ϊ�������������ʱ��ֻ���������׵�ַ���൱��һ��ָ��
//{
//	int i = 0;
//	int j = 0;
//	for (; j < sz; j++)
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				arr[i] ^= arr[i + 1];
//				arr[i + 1] ^= arr[i];
//				arr[i] ^= arr[i + 1];
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 9, 5, 4, 8, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	system("pause");
//	return 0;
//}