#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

//void Print(int num)
//{
//	if (num > 9)
//	{
//		Print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//int main()
//{
//	int num = 1564613;
//	Print(num);
//	system("pause");
//	return 0;
//}

//int MyStrlen(const int *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + MyStrlen(p + 1));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", MyStrlen(arr));
//	
//	system("pause");
//	return 0;
//}

//int Factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Factorial(n));
//	system("pause");
//	return 0;
//}
//
//int CountOneBits(unsigned int n)
//{
//	if (n != 0)
//	{
//		if (n % 2 == 1)
//			return 1 + CountOneBits(n / 2);
//		else
//			return CountOneBits(n / 2);
//	}
//	else
//		return 0;
//}

//int CountOneBits(unsigned int n)
//{
//	if (n == 0)
//		return 0;
//	else
//	{
//		if ((n & 1) == 1)
//			return 1 + CountOneBits(n >> 1);
//		else
//			return CountOneBits(n >> 1);
//	}
//}

//int main()
//{
//	int n = 0;
//	printf("Please input a number:");
//	scanf("%d", &n);
//	printf("%d\n", CountOneBits(n));
//	system("pause");
//	return 0;
//}

//void PrintOdd_Even(unsigned int n)
//{
//	int i = 0;
//	int j = 0;
//	int arr[32];
//	while (n)
//	{
//		arr[i++] = n % 2;
//		n /= 2;
//	}
//	printf("The Even Number: ");
//	for (j = i; j > 1; j -= 2)
//	{
//		printf("%d ", arr[j - 1]);
//	}
//	printf("\n");
//	printf("The Odd Number:  ");
//	for (j = (i - 1); j > 0; j -= 2)
//	{
//		printf("%d ", arr[j - 1]);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("Please input a number:");
//	scanf("%d", &n);
//	PrintOdd_Even(n);
//	system("pause");
//	return 0;
//}

//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", (n % 10));
//}
//
//int main()
//{
//	int n = 123456789;
//	Print(n);
//	system("pause");
//	return 0;
//}

//int DeferentBits(int m, int n)
//{
//	int count = 0;
//	while (m || n)
//	{
//		if ((m % 2) != (n % 2))
//		{
//			count++;
//		}
//		m /= 2;
//		n /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	printf("%d\n", DeferentBits(m, n));
//	system("pause");
//	return 0;
//}

int main()
{

	system("pause");
	return 0;
}