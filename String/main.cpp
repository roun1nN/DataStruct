#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* str;
	int length;
}String;

void init_str(String& s, const char* str)
{
	s.str = (char*)malloc(sizeof(char) * strlen(str) + 1);
	strcpy(s.str + 1, str);
	s.length = strlen(str);
}

bool subString(String s, String& str, int pos, int len)
{
	if (s.length - pos + 1 < len)
	{
		return false;
	}
	str.str = (char*)malloc(sizeof(char) * len + 1);
	for (int i = 0; i < len; i++)
	{
		str.str[i + 1] = s.str[pos + i];
	}
	str.length = len;
	return true;
}

// compare one string with another
int cmp_str(String s1, String s2)
{
	for (int i = 1; i <= s1.length && i <= s2.length; i++)
	{
		if (s1.str[i] != s2.str[i]) {
			return s1.str[i] - s2.str[i];
		}
	}
	return s1.length - s2.length;
}

// 释放空间并使其指向NULL
void release_memory(String& str)
{
	free(str.str);
	str.length = 0;
	str.str = NULL;
}

int index(String s1, String s2)
{
	for (int i = 1; i <= s1.length - s2.length + 1; i++)
	{
		String tempStr;
		subString(s1, tempStr, i + 1, s2.length);
		if (!cmp_str(tempStr, s2))
		{
			return i + 1;
		}
		release_memory(tempStr);
	}
	return 0;
}

int main()
{
	String s1;
	String s2;
	String s3;
	init_str(s1, "zhanghanxing");
	init_str(s2, "zhang");
	init_str(s3, "hani");
	if (cmp_str(s1, s2) > 0)
	{
		printf("s1 > s2");
	}
	else if (cmp_str(s1, s2) == 0)
	{
		printf("s1 == s2");
	}
	else
	{
		printf("s2 > s1");
	}
	printf("\n");
	printf("s3在s1中的位置为:%d", index(s1, s3));
	return 0;
}