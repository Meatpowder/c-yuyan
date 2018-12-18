//void ReverseBit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (; i < 32; i++)
//	{
//		sum += (((value >> i) & 1) << (31 - i));
//	}
//	printf("%u\n", sum);//此处一定要用%u而不是%d的，因为若最高位为1，sum代表的是有符号数，其结果为负数
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