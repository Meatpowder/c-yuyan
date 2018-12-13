void BubbleSort(int arr[], int sz)//数组作为函数参数传入的时候，只传递数组首地址，相当于一个指针
{
	int i = 0;
	int j = 0;
	for (; j < sz; j++)
	{
		for (i = 0; i < sz - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				arr[i] ^= arr[i + 1];
				arr[i + 1] ^= arr[i];
				arr[i] ^= arr[i + 1];
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 9, 5, 4, 8, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	system("pause");
	return 0;
}