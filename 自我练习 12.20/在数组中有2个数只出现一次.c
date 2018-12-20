
//int main()//在数组中找出只出现一次的数
//{
//	int arr[] = { 1, 8, 3, 1, 4, 2, 8, 4 };
//	int i = 0;
//	int pos = 0;
//	int num = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//不仅将原数组分为两组，还进行按位于找出这两个数
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	printf("The number is:%d\n", num1);
//	printf("The other number is:%d\n", num2);
//	system("pause");
//	return 0;
//}