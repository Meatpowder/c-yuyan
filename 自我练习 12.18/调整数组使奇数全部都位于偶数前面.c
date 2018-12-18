int main()
{
	int arr[10] = { 3, 5, 4, 4, 3, 1, 8, 3, 5, 4 };
	int i = 0;
	int j = 0;
	printf("the odd:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = (1 + i); j < 9 - i;)
		{
			arr[j] ^= arr[j + 1];
			arr[j + 1] ^= arr[j];
			arr[j] ^= arr[j + 1];
			j += 2;
		}
	}
	printf("\n");
	printf("the new:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}