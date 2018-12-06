#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
 


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	/*int ch = -1;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);*/
//	/*int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}*/
//
//	/*int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//*/
//	//int num = 10;
//	//int *p = &num;
//	////p = &num;
//	////&num;
//	//printf("%d\n", &num);
//	//printf("%d\n", *p);
//	//printf("%d\n", p);
//
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to beijin!";
//	char arr2[] = "******************";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		Sleep(100);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	int num = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = i * sum;
//		num = num + sum;
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,1,2,3,4,4,4,4,4,5,7,8,10,13 };
//	int b = 8;
//	//int c = 0;
//	int i = 0;
//	for (; i < sizeof(a) / sizeof(a[0]) - 1; i++)
//	{
//		if (a[i] == b)
//		{
//			printf("xiabiao = %d\n", i);
//		}
//	}
//	if (i > sizeof(a) / sizeof(a[0]) - 1)
//		printf("wu");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int key = 8;
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
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("wu");
//	}
//	/*if (left <= right)
//	{
//		printf("xiabiao = %d\n", mid);
//		printf("key = %d\n", key);
//	}
//	else
//	{
//		printf("wu");
//	}*/
//	system("pause");
//	return 0;
//}
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a);
//}
//
//int main()
//{
//	int a = 1234;
//	print(a);
//	//int b = 0;
//	//b = a / 10;
//	/*while (a > 9)
//	{
//		a / 10;
//		if (b <= 9)
//		{
//			printf("%d ", a / 10);
//		}
//	}*/
//	system("pause");
//	return 0;
//}

//int my_strlen(char *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//		return my_strlen(p + 1) + 1;
//}
//
//int main()
//{
//	char *p = "abcdefg";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	system("pause");
//	return 0;
//}