#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>

//int main()
//{
//	int a = -10;
//	int *p = NULL;
//	printf("%d\n", !2);
//	printf("%d\n", !0);
//	a = -a;
//	p = &a;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	printf("%p\n", p);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);
//	system("pause");
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[] = { 0 };
//	char ch[] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	system("pause");
//	return 0;
//}

//int main()//注意！
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}

//int main()//360笔试题，还不会
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nd = %d\ni = %d\n", a, b, d, i);
//	system("pause");
//	return 0;
//}

//int main()//在数组里找出单独一个数
//{
//	int arr[] = { 1, 3, 6, 6, 5, 1, 3 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		arr[0] ^= arr[i];
//	}
//	printf("%d\n", arr[0]);
//	system("pause");
//	return 0;
//}
//
//int main()//在数组中找出只出现一次的数
//{
//	int arr[] = { 1, 8, 3, 1, 4, 2, 8, 4 };
//	int i = 0;
//	int pos = 0;
//	int num = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//不仅将原数组分为两组，还进行按位于找出这两个数
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("The number is:%d\n", num1);
//	printf("The other number is:%d\n", num2);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	printf("money:");
//	scanf("%d", &money);
//	int num = money;
//	int count = 0;
//	while (money)
//	{
//		if ((money % 2) == 1)
//		{
//			count++;
//		}
//		num += (money / 2);
//		money /= 2;
//	}
//	if (count > 0)
//	{
//		num += 1;
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//

//void MyStrcpy(char arr2[], char arr1[])
//{
//	int i = 0;
//	for (; i < 40; i++)
//	{
//		if (arr1 != 0)
//		{
//			arr2[i] = arr1[i];
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("arr1 = %s\narr2 = %s\n", arr1, arr2);
//}
//
//int main() 
//{
//	char arr1[40] = "holle word";
//	char arr2[40];
//	MyStrcpy(arr2, arr1);
//	system("pause");
//	return 0;
//}

//void MyStrcat(char *dst, char *src)
//{
//	char *p1 = dst;
//	char *p2 = src;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	while (*p2 != '\0')
//	{
//		*p1++ = *p2++;
//	}
//	printf("src = %s\ndst = %s\n", src, dst);
//}
//
//int main()
//{
//	char src[100] = "holle word";
//	char dst[100] = "i love you";
//	//strcat(dst, src);
//	MyStrcat(dst, src);
//	system("pause");
//	return 0;
//}