#include<stdio.h>
#include<Windows.h>

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("%d\n", i);//4,�������ͨ��������������ȷ��Ψһ·������������
//	system("pause");
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int a;
//	a = fun() - fun() * fun();
//	printf("%d\n", a);//10,�������ͨ��������������ȷ��Ψһ·������������
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	printf("%p\n", &n);    //00CFF8B0
//	printf("%p\n", pc);    //00CFF8B0
//	printf("%p\n", pc + 1);//00CFF8B1
//	printf("%p\n", pi);    //00CFF8B0
//	printf("%p\n", pi + 1);//00CFF8B4  ָ������;���ָ����ǰ��������ƶ����ľ���
//
//	system("pause");
//	return 0;
//}

//int MyStrlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	/*printf("%p\n", p);
//	printf("%p\n", s);*/
//	return p - s;
//}
//
//int main()
//{
//	char *s = "abcdefg";
//	printf("%d\n", MyStrlen(s));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("&arr[%d] = %p  <==>  p + %d = %p  ", i, &arr[i], i, p + i);
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	system("pause");
//	return 0;
//}