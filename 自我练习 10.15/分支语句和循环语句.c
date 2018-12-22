#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char arr1[] = "ni shi yi ge sha bi ";
	char arr2[] = "********************";
	int left = 0;
	int right = strlen(arr2) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{
		//Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	system("pause");
	return 0;
}


//#include<stdio.h>
//#include<stdlib.h>
//int strcmp(char arr1[], char arr2[])
//{
//	if (arr1 = arr2)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[6];
//	char arr2[6];
//	int i = 0;
//	printf("请设置密码：");
//	scanf("%s\n", arr1);
//	for (i = 0; i < 3; i++)
//	{
//		printf("\n");
//		printf("请输入密码：");
//		scanf("%s\n", arr2);
//		if (strcmp(arr2, arr1) == 0)
//		{
//			break;
//		}
//		else
//			printf("密码错误");
//	}
//	if (i == 3)
//	{
//		printf("次数用完，退出");
//	}
//	else
//		printf("进入");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int factorial(int n)
//{
//	int sum = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个大于0的整数：");
//	scanf("%d\n", &n);
//	printf("sum = %d\n", factorial(n));
//
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int luan(int n)
//{
//	int sum = 0;
//	int i = 0;
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m = m * i;
//		sum = sum + m;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	printf("%d", luan(n));
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;
//	int mid = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		printf("找到了，下标为%d\n", mid);
//	}
//	else
//		printf("找不到");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int mid = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	mid = (a + b) / 2;
//	printf("%d\n", mid);
//	
//	system("pause");
//	return 0;
//}