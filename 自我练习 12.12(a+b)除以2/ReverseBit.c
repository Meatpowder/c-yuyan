//void ReverseBit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (; i < 32; i++)
//	{
//		sum += (((value >> i) & 1) << (31 - i));
//	}
//	printf("%u\n", sum);//�˴�һ��Ҫ��%u������%d�ģ���Ϊ�����λΪ1��sum��������з�����������Ϊ����
//}
//
//int main()
//{
//	int value = 0;
//	scanf("%d", &value);
//	ReverseBit(value);
//	system("pause");
//	return 0;
//}