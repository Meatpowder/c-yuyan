#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	printf("������һ����������������ִ𰸣�");
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		printf("��£�");
//		scanf("%d", &b);
//		if (b < a)
//		{
//			printf("��С��");
//		}
//		else if (b > a)
//		{
//			printf("�´���");
//		}
//	}
//	if (i = 5)
//	{
//		printf("�������꣬������Ϸ");
//	}
//	else
//		printf("�����ˣ�Ϊ��%d\n", b);
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
//		printf("������һ������1��100��������");
//		scanf("%d", &a);
//		if (a < n)
//			printf("��С��");
//		else if (a > n)
//			printf("�´���");
//		if (a == n)
//		{
//			printf("�¶���");
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
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//	}
//	else
//	{
//		printf("�Ҳ���");
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
//	printf("���������룺");
//	scanf("%s", arr1);
//	printf("\n");
//	printf("���������룺");
//	scanf("%s", arr2);
//	int ret = strcmp(arr1, arr2);
//	if (ret = 1)
//	{
//		printf("����");
//	}
//	else if (ret = 0)
//	{
//		printf("����");
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
//	printf("��������ĸ��");
//	scanf("%c", &arr);
//	toupper(arr);
//	system("pause");
//	return 0;
//}