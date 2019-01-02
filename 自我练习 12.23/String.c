#include"String.h"

char *MyStrcpy(char *dst, const char *str)//��str�ַ������Ƶ�dst��str������
{
	assert(dst != NULL);
	assert(str != NULL);

	char *ret = (char*)dst;
	while (*str != '\0')
	{
		*dst++ = *str++;
	}
	*dst = '\0';
	return (char*)ret;
}

char *MyStrcat(char *dst, const char *str)//��str�ַ���ƴ�ӵ�dst���棬str����
{
	assert(dst);
	assert(str);

	while (*dst)
	{
		dst++;
	}
	while (*dst++ = *str++)
	{
		;
	}
	return (char *)dst;
}

char *MyStrstr(const char *dst, const char *str1)//�ҵ�dst����str1��һ�γ��ֵĺ��沿�֣�dst��str1������
{
	assert(dst);
	assert(str1);

	char *cp = (char*)dst;
	char *substr = (char*)str1;
	char *s1 = NULL;

	if (*str1 == '\0')
	{
		return (char*)dst;
	}
	while (*cp)
	{
		s1 = cp;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
		{
			return cp;
		}
		cp++;
	}
	return(NULL);
}

char *MyStrchr(const char *string, char value)//��string���ҳ�value�������������ַ���
{
	assert(string != NULL);
	assert(value);

	char *ret = (char *)string;
	while (*ret)
	{
		if (*ret == value)
		{
			return (char *)ret;
		}
		ret++;
	}
	return NULL;
}

int MyStrcmp(const char* s1, const char* s2)
{
	assert(s1);
	assert(s2);
	char *cp = (char*)s1;
	char *substr = (char*)s2;

	while (*cp && *substr)
	{
		if (*cp > *substr)
		{
			return 1;
		}
		else if (*cp < *substr)
		{
			return -1;
		}
		cp++;
		substr++;
	}
	if (*cp == '\0' && *substr != '\0')
	{
		return -1;
	}
	else if (*cp != '\0' && *substr == '\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

char *MyMemcpy(char *dst, const char *src, int size)
{
	assert(src != NULL);
	assert(dst != NULL);
	char *ret = (char*)dst;
	while (size--)
	{
		*dst++ = *src++;
		if (*src == '\0')
		{
			break;
		}
	}
	*dst = '\0';
	return (char*)ret;
}

char *MyMemmove(char *dst, const char *src, int size)
{
	assert(src != NULL);
	assert(dst != NULL);
	char *ret = (char*)dst;
	while (size--)
	{
		*dst++ = *src++;
	}
	return ret;
}