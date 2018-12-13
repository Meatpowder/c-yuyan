int main()
{
	int a = 10;
	int b = 5;
	(a + b) >> 1;//会溢出
}

int main()
{
	int a = 10;
	int b = 15;
	printf("%d\n", (b + ((a - b) >> 1)));//多出的地方平均分配
	system("pause");
	return 0;
}

int main()
{
	int a = 10;
	int b = 5;
	printf("%d\n", (a & b) + ((a ^ b) >> 1));//二进制下，相同的部分(a & b)，不同的部分(a ^ b)进行平均分配
	system("pause");
	return 0;
}