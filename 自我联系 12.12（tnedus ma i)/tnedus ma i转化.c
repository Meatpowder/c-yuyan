int main()
{
	char arr[] = "tnedus ma i";
	int i = 0;
	int j = 0;
	int sz = strlen(arr);
	for (; i < (sz / 2); i++)
	{
		arr[i] ^= arr[sz - 1 - i];
		arr[sz - 1 - i] ^= arr[i];
		arr[i] ^= arr[sz - 1 - i];
	}
	printf("%s\n", arr);
	system("pause");
	return 0;
}