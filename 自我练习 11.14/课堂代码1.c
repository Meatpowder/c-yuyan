#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//
//	system("pause");
//	return 0;
//}

//int golbal = 2019;
//int main()
//{
//	int local = 2018;
//	int global = 2020;
//	printf("global = %d\n", global);
//	system("pause");
//	return 0;
//}

int main()
{
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\code\test.c"));
	printf("%s\n", "c:\code\test.c");
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%s\n", "c:\test\32\test.c");
	printf("%d\n", strlen("\test"));
	printf("%d\n", strlen("c:\test"));
	//printf("%d\n", strlen("c:\test\"));
	printf("%d\n", strlen("c:\test\32"));
	printf("%d\n", strlen("\test\32\test"));
	printf("%d\n", strlen("\32"));

	system("pause");
	return 0;
}