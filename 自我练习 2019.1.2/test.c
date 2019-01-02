#include<stdio.h>
#include<stdlib.h>

void CheckSys()//设计程序判断当前机器的字节序（百度）
{
	int i = 1;
	int ret = (*(char *)&i);
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
}

int main()
{
	//CheckSys();

	/*char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a = %d, b = %d, c = %d\n", a, b, c);*/   //-1  -1  255

	//char a = 11;
	//printf("%u\n", a);     //%u以补码的形式返回，并且返回相应的十进制数
	//char b = -11;
	//printf("%u\n", b);

	/*unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}*/

	/*char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));*/

	/*short num = 32767;
	short int a = num + 1;
	printf("%d\n", a);  */    //-32768

	/*int n = 9;
	float *p = (float*)&n;
	printf("n  = %d\n", n);
	printf("*p = %f\n", *p);

	*p = 9.0;
	printf("num = %d\n", n);
	printf("*p  = %f\n", *p);*/


	system("pause");
	return 0;
}