#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//typedef struct Stu
//{
//	char name[20];
//	int age;
//}stu;
//
//void Print(stu *p)
//{
//	printf("name = %s   age = %d\n", p->name, p->age);
//	printf("name = %s   age = %d\n", p->name, p->age);
//}
//
//int main()
//{
//	stu s = { "zhangsan", 20 }; //定义结构体，并传参
//	Print(&s);
//	system("pause");
//	return 0;
//}

//typedef struct S
//{
//	int data[1000];
//	int num;
//}stu;
//
//void Print1(stu s)
//{
//	printf("%d\n", s.num);
//}
//
//void Print2(stu *p)
//{
//	printf("%d\n", p->num);
//}
//
//int main()
//{
//	stu s = { {1,2,3,4}, 1000 };
//	Print1(s);       //传结构体，参数压栈开销太大
//	Print2(&s);      //传其地址，比第一个好
//	system("pause");
//	return 0;
//}

//void Fuc()
//{
//	int count = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * 100; k++)
//	{
//		++count;
//	}
//	int num = 10;
//	while (num--)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}                             //时间复杂度 O(N^2)
//
//int main()
//{
//	Fuc();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[] = "This is a simple string";
//	char *p;
//	p = strstr(str, "simple");//在str中查找“simple”第一次出现的位置，并将其后面传给p所指向的位置
//	puts(p);
//	strncpy(p, "sample", 6);  //将p所指向的前6个替换成“sample”
//	puts(p);
//
//	//const char * strchr(const char * str, int character);
//	system("pause");
//	return 0;
//}

//void Swap(int *p, int *pc)
//{
//	*p ^= *pc;
//	*pc ^= *p;
//	*p ^= *pc;
//}
//
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	int isSorted;
//	for (i = 0; i < sz - 1; i++)
//	{
//		isSorted = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				Swap(arr + j, arr + j + 1);
//				isSorted = 0;
//			}
//		}
//		if (isSorted == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}                          //时间复杂度 O(N^2)
//
//int BinarySearch(int *p, int size, int value)
//{
//	int left = 0;
//	int right = size;
//	while (left < right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (*(p + mid) > value)
//		{
//			right = mid;
//		}
//		else if (*(p + mid) < value)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 3,5,4,2,1,8,6,7,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	printf("%d\n", BinarySearch(arr, sz, 8));
//	system("pause");
//	return 0;
//}

//long long Factorial(int n)
//{
//	return n < 2 ? n : n * Factorial(n - 1);
//}
//
//int main()
//{
//	int num = 100;
//	Factorial(num);
//	//printf("%d\n", Factorial(num));   //时间复杂度 O(N)
//	system("pause");
//	return 0;
//}

//long long Fibonacci(int n)
//{
//	return n < 2 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//
//int main()
//{
//	int n = 10;
//	Fibonacci(n);                        //时间复杂度 O(2^N)
//	system("pause");
//	return 0;
//}

