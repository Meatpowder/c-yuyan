#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

//void ReverseBit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (; i < 32; i++)
//	{
//		sum += (((value >> i) & 1) << (31 - i));
//	}
//	printf("%u\n", sum);
//}
//
//int main()
//{
//	int value = 0;
//	scanf("%d", &value);
//	ReverseBit(value);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 15;
//	printf("%d\n", (b + ((a - b) >> 1)));//多出的地方平均分配
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 5;
//	printf("%d\n", (a & b) + ((a ^ b) >> 1));//二进制下，相同的部分(a & b)，不同的部分(a ^ b)进行平均分配
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7 };
//	int i = 0;
//	int j = 0;
//again:
//	for (; i < strlen(arr); i++)
//	{
//		int count = 0;
//		for (j = 0; j < strlen(arr) - i - 1; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//				goto again;
//			}
//		}
//		if (count = 0)
//		{
//			printf("index = %d, the num = %d\n", i, arr[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}//狗屎！！！！

//int main()
//{
//	int arr[] = { 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7 };
//	int i = 0;
//	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr[0] ^= arr[i];
//	}
//	printf("the num = %d\n", arr[0]);
//	system("pause");
//	return 0;
//}
