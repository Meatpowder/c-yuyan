#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1; //��������ַ�������
//	printf("%s\n", arr2);
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit...";
//	int right = strlen(arr1) - 1;
//	printf("%s\n", &right);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	char arr1[] = "";
//	char arr2[] = "";
//	printf("���������룺");
//	scanf("%s", arr1);
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", arr2);
//		if (strcmp(arr2, arr1) == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�˳�");
//	}
//	else
//	{
//		printf("��ȷ");
//	}
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	printf("������������");
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - i) - 3; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		c = i % 10;
//		a = i / 100;
//		b = (i / 10) % 10;
//		if (i == a*a*a + b*b*b + c*c*c)
//		{
//			printf("%d", i);
//			printf("\n");
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int sn = 0;
//	printf("����������n��");
//	scanf("%d", &n);
//	printf("\n");
//	printf("������λ��a��ֵ��");
//	scanf("%d", &a);
//	for (i = 0; i <= n; i++)
//	{
//		sum = sum * 10 + a;
//		sn = sn + sum;
//	}
//	printf("sn = a + aa + aaa + ... =%d\n", sn);
//	system("pause");
//	return 0;
//}


int main()
{

	return 0;
}
