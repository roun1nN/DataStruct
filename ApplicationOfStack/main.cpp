#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* brackets = (char*)malloc(100);
	//strcpy(brackets, "{([(())])}");
	scanf("%s", brackets);
	int len = strlen(brackets);
	int top = -1;
	char* temp = (char*)malloc(len);
	for (int i = 0; i < len; i++)
	{
		if (brackets[i] == '{' || brackets[i] == '(' || brackets[i] == '[')
		{
			if (top == len - 1)
			{
				printf("栈空间不足，无法继续匹配");
				break;
			}
			temp[++top] = brackets[i];
		}
		else if (brackets[i] == '}' || brackets[i] == ')' || brackets[i] == ']')
		{
			if (top >= 0)
			{
				if (brackets[i] == '}' && temp[top] == '{')
				{
					top--;
					continue;
				}
				else if (brackets[i] == ']' && temp[top] == '[')
				{
					top--;
					continue;
				}
				else if (brackets[i] == ')' && temp[top] == '(')
				{
					top--;
					continue;
				}
			}
			// 失败的情况，直接让break之后的top!=-1即可
			top = 1;
			break;
		}
	}
	if (top == -1)
	{
		printf("匹配成功.");
	}
	else
	{
		printf("失败");
	}
}