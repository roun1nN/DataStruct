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
				printf("ջ�ռ䲻�㣬�޷�����ƥ��");
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
			// ʧ�ܵ������ֱ����break֮���top!=-1����
			top = 1;
			break;
		}
	}
	if (top == -1)
	{
		printf("ƥ��ɹ�.");
	}
	else
	{
		printf("ʧ��");
	}
}