#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	printf("请设置一个大于零的整数猜字答案：");
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		printf("请猜：");
//		scanf("%d", &b);
//		if (b < a)
//		{
//			printf("猜小了");
//		}
//		else if (b > a)
//		{
//			printf("猜大了");
//		}
//	}
//	if (i = 5)
//	{
//		printf("次数用完，结束游戏");
//	}
//	else
//		printf("猜中了，为：%d\n", b);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//int main()
//{
//	int i, a;
//	int n = 50;
//	srand((int)time(NULL));
//	//n = rand() % 100 + 1;
//	for (i = 0; i < 5; i++)
//	{
//		printf("请输入一个介于1到100的整数：");
//		scanf("%d", &a);
//		if (a < n)
//			printf("猜小了");
//		else if (a > n)
//			printf("猜大了");
//		if (a == n)
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
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
//		printf("找到了，下标为：%d\n", mid);
//	}
//	else
//	{
//		printf("找不到");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int strcmp(char arr1, char arr2)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (arr1 == arr2)
//			return 1;
//		else
//			return 0;
//	}
//}
//int main()
//{
//	char arr1[] = "";
//	char arr2[] = "";
//	printf("请设置密码：");
//	scanf("%s", arr1);
//	printf("\n");
//	printf("请输入密码：");
//	scanf("%s", arr2);
//	int ret = strcmp(arr1, arr2);
//	if (ret = 1)
//	{
//		printf("进入");
//	}
//	else if (ret = 0)
//	{
//		printf("错误");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int toupper(char arr)
//{
//	if (arr >= 'a' && arr <= 'z')
//	{
//		printf("%c\n", arr - 32);
//	}
//	else
//	{
//		printf("%c\n", arr + 32);
//
//	}
//}
//int main()
//{
//	char arr;
//	printf("请输入字母：");
//	scanf("%c", &arr);
//	toupper(arr);
//	system("pause");
//	return 0;
//}