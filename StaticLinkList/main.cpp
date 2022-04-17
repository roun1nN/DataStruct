#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10
typedef struct {
	int data;
	int next;
} SLinkList[MaxSize];

void initSLinkList(SLinkList& s, int len)
{
	for (int i = 0; i < len; i++)
	{
		s[i].next = -2; // 代表该结点为空
	}
}

int main()
{
	SLinkList s; // 静态链表
	int len = sizeof(s) / sizeof(s[0]);
	initSLinkList(s, len);
	return 0;
}