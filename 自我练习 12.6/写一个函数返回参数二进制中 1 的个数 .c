//1¡¢ % 2ºÍ / 2:
//int CountOneBits(unsigned int n)
//{
//	if (n != 0)
//	{
//		if (n % 2 == 1)
//			return 1 + CountOneBits(n / 2);
//		else
//			return CountOneBits(n / 2);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int n = 0;
//	printf("Please input a number:");
//	scanf("%d", &n);
//	printf("%d\n", CountOneBits(n));
//	system("pause");
//	return 0;
//}

//2¡¢ÓÒÒÆ£º
//int CountOneBits(unsigned int n)
//{
//	if (n == 0)
//		return 0;
//	else
//	{
//		if ((n & 1) == 1)
//			return 1 + CountOneBits(n >> 1);
//		else
//			return CountOneBits(n >> 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("Please input a number:");
//	scanf("%d", &n);
//	printf("%d\n", CountOneBits(n));
//	system("pause");
//	return 0;
//}