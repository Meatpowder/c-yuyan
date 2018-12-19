void LeftHanded(char *p, int sz, int k)
{
	char arr[100] = "";
	int i = 0;
	int j = 0;
	for (; i < 2; i++)
	{
		char *p = "ABCDEFG";
		for (j = 0; j < sz; j++)
		{
			arr[j + i * sz] = *(p++);
		}
	}
	for (i = k - 1; i < sz + k - 1; i++)
	{
		printf("%c", arr[i]);
	}
}

int main()
{
	char *p = "ABCDEFG";
	int sz = strlen(p);
	int k = 0;
	printf("Please enter the left-handed position:");
	scanf("%d", &k);
	LeftHanded(p, sz, k);
	system("pause");
	return 0;
}