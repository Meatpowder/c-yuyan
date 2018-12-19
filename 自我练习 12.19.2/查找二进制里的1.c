#include<stdio.h>
#include<Windows.h>

int main()
{
	int num = 10;
	int count = 0;
	while (num)
	{
		if ((num % 2) == 1)
		{
			count++;
		}
		num /= 2;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

int main()
{
	int num = -10;
	int count = 0;
	int i = 0;
	for (; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

int main()
{
	int num = -1;
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);//只要进入就有不一样的位数
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}