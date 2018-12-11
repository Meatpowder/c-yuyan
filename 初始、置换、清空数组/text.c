#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdlib.h>
//
//void multiplication_table(int a)
//{
//	int i = 0;
//	int j = 0;
//	int b,c,d;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			c = i + 1;
//			d = j + 1;
//			b = c * d;
//			printf("%d*%d = %d ", d, c, b);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	/*b = a / 2;*/
//	multiplication_table(a);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//void swap_numbers(int a, int b)
//{
//	b = a ^ b;
//	a = a ^ b;
//	b = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//}
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	swap_numbers(a, b);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void is_leap(int year)
//{
//	for (year = 1000; year < 2000; year++)
//	{
//		if (year%4 == 0&&year%100 != 0 || year%400 == 0)
//		{
//			printf("year = %d\n", year);
//		}
//	}
//}
//int main()
//{
//	int year = 0;
//	is_leap(year);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	printf("初始化数组：");
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	printf("数组置换：");
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void empty(int arr[], int sz)
//{
//	int i = 0;
//	printf("清空数组：");
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	printf("\n");
//	reverse(arr, sz);
//	printf("\n");
//	empty(arr, sz);
//	printf("\n");
//	system("pause");
//	return 0;
//}