#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int elemType;
typedef struct LNode {
	elemType data;
	struct LNode* next;
}LNode, * LinkList;

int main()
{
	LinkList L = (LNode*)calloc(1, sizeof(LNode));
	LNode* ptail = L;
	int e;
	scanf("%d", &e);
	while (e != 9999)
	{
		LNode* newNode = (LNode*)malloc(sizeof(LNode));
		newNode->data = e;
		newNode->next = 0; // newNode->next = NULL;
		if (L != ptail)
		{
			ptail->next = newNode;
			ptail = newNode;
		}
		else
		{
			ptail->next = newNode;
			ptail = newNode;
			L->next = ptail;
		}
		scanf("%d", &e);
	}
	LNode* p = L->next->next->next;
	LNode* q = p->next;
	p->data = q->data;
	free(q);
	q = 0;// q = NULL;
	return 0;
}