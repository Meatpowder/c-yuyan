#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

//void LeftHanded(char *p, int sz, int k)
//{
//	char arr[100] = "";
//	int i = 0;
//	int j = 0;
//	for (; i < 2; i++)
//	{
//		char *p = "ABCDEFG";
//		for (j = 0; j < sz; j++)
//		{
//			arr[j + i * sz] = *(p++);
//		}
//	}
//	for (i = k - 1; i < sz + k - 1; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//
//int main()
//{
//	char *p = "ABCDEFG";
//	int sz = strlen(p);
//	int k = 0;
//	printf("Please enter the left-handed position:");
//	scanf("%d", &k);
//	LeftHanded(p, sz, k);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char *p = "ABCDEFG";
//	int sz = strlen(p);
//	char arr1[100] = "";
//	int i = 0;
//	int j = 0;
//	for (; i < 2; i++)
//	{
//		char *p = "ABCDEFG";
//		for (j = 0; j < sz; j++)
//		{
//			arr1[j + i * sz] = *(p++);
//		}
//	}
//
//	char arr2[100] = "EFG";
//	int sz2 = strlen(arr2);
//
//	if (sz2 > sz)
//	{
//		printf("Enter erorr!\n");
//	}
//	else
//	{
//		j = 0;
//		for (i = 0; i < sz2; i++)
//		{
//			for (; j < (2 * sz); j++)
//			{
//				if (arr2[i] == arr1[j])
//				{
//					j++;
//					break;
//				}
//			}
//			if (i == (sz2 - 1) && j != (2 * sz))
//			{
//				printf("Correct!\n");
//				goto again;
//			}
//		}
//		printf("Erorr!\n");
//	}
//again:
//	system("pause");
//	return 0;
//}