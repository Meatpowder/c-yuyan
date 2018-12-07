//void PrintOdd_Even(unsigned int n)
//{
//	int i = 0;
//	int j = 0;
//	int arr[32];
//	while (n)
//	{
//		arr[i++] = n % 2;
//		n /= 2;
//	}
//	printf("The Even Number: ");
//	for (j = i; j > 1; j -= 2)
//	{
//		printf("%d ", arr[j - 1]);
//	}
//	printf("\n");
//	printf("The Odd Number:  ");
//	for (j = (i - 1); j > 0; j -= 2)
//	{
//		printf("%d ", arr[j - 1]);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("Please input a number:");
//	scanf("%d", &n);
//	PrintOdd_Even(n);
//	system("pause");
//	return 0;
//}