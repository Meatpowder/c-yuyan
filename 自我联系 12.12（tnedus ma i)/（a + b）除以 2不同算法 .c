int main()
{
	int a = 10;
	int b = 5;
	(a + b) >> 1;//�����
}

int main()
{
	int a = 10;
	int b = 15;
	printf("%d\n", (b + ((a - b) >> 1)));//����ĵط�ƽ������
	system("pause");
	return 0;
}

int main()
{
	int a = 10;
	int b = 5;
	printf("%d\n", (a & b) + ((a ^ b) >> 1));//�������£���ͬ�Ĳ���(a & b)����ͬ�Ĳ���(a ^ b)����ƽ������
	system("pause");
	return 0;
}