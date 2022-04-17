#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int elemType;

typedef struct LNode {
	elemType data;
	struct LNode* next;
}LNode, *LinkList;

void printList(LinkList L)
{
	printf("遍历打印L结果为\n");
	while (L != NULL)
	{
		printf("%-4d", L->data);
		L = L->next;
	}
}

int main()
{
	LinkList L = NULL;
	LNode* p = NULL;
	elemType e;
	scanf("%d", &e);
	while (e != 9999)
	{
		p = (LNode*)malloc(sizeof(LNode));
		p->data = e;
		if (L == NULL)
		{
			L = p;
			p->next = NULL;
		}
		else
		{
			p->next = L;
			L = p;
		}
		scanf("%d", &e);
	}
	printList(L);
	return 0;
}