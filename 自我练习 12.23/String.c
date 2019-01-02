#include"String.h"

char *MyStrcpy(char *dst, const char *str)//将str字符串复制到dst，str处不变
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

char *MyStrcat(char *dst, const char *str)//将str字符串拼接到dst后面，str不变
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

char *MyStrstr(const char *dst, const char *str1)//找到dst处，str1第一次出现的后面部分，dst和str1都不变
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

char *MyStrchr(const char *string, char value)//在string中找出value，并输出其后面字符串
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