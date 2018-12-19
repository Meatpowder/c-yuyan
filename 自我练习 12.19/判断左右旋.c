int main()
{
	char *p = "ABCDEFG";
	int sz = strlen(p);
	char arr1[100] = "";
	int i = 0;
	int j = 0;
	for (; i < 2; i++)
	{
		char *p = "ABCDEFG";
		for (j = 0; j < sz; j++)
		{
			arr1[j + i * sz] = *(p++);
		}
	}

	char arr2[100] = "EFG";
	int sz2 = strlen(arr2);

	if (sz2 > sz)
	{
		printf("Enter erorr!\n");
	}
	else
	{
		j = 0;
		for (i = 0; i < sz2; i++)
		{
			for (; j < (2 * sz); j++)
			{
				if (arr2[i] == arr1[j])
				{
					j++;
					break;
				}
			}
			if (i == (sz2 - 1) && j != (2 * sz))
			{
				printf("Correct!\n");
				goto again;
			}
		}
		printf("Erorr!\n");
	}
again:
	system("pause");
	return 0;
}