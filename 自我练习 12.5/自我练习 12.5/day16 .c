#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

//int main()
//{
//	int arr[8];
//	int i = 0;
//	for (; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
//	{
//		if (i < 2)
//		{
//			arr[i] = 1;
//			printf("%d ", arr[i]);
//		}
//		else if (i >= 2)
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//			printf("%d ", arr[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int FibonacciNumber(int size)
//{
//	if (size <= 2)
//		return 1;
//	else
//		return FibonacciNumber(size - 1) + FibonacciNumber(size - 2);
//}
//
//int main()
//{
//	int size = 0;
//	printf("please input:");
//	scanf("%d", &size);
//	int num = FibonacciNumber(size);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//
//int Factorial(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Factorial(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Factorial(n);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//
//
//int DigitSum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return ((n % 10) + DigitSum(n / 10));
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = DigitSum(n);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//void reverse_string(char * p)
//{
//	if (*p == '\0')
//	{
//		printf("%c\n", *p);
//		return;
//	}
//	else
//	{
//		reverse_string(++p);
//		printf("%c\n", *(--p));
//	}
//}
//
//int main()
//{
//	char arr[]="abcdefgh";
//    reverse_string(arr);
//	system("pause");
//    return 0;
//}
//
//int MyStrlen(char *p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int MyStrlen(char *p)
//{
//	if (*p == '\0')
//		return 0;
//	else
//		return (1 + MyStrlen(p+1));
//}
//
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	int size = MyStrlen(arr);
//	printf("%d\n", size);
//	system("pause");
//	return 0;
//}
//
//void Print(int a)
//{
//	if (a > 9)
//		Print(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 123456;
//	Print(a);
//	system("pause");
//	return 0;
//}