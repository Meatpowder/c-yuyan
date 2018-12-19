//#define MAX = 1000
//#define Add(x, y) ((x) + (y))
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

int main()
{
	int i = 0;
	//int j = 0;
	int a = 0;
	int count = 1;
	scanf("%d", &a);
	for (i = 1; i <= sqrt(a); i++)
	{
		if (a%i == 0)
		{
			count = 0;
		}
	}
	if (count)
	{
		printf("%d\n", a);
	}
	else
		printf("bushi");
	system("pause");
	return 0;
}