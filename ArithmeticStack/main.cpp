#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxSize 50
typedef char ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top;
}SStack;

void init_stack(SStack& stack)
{
	stack.top = -1;
}

int main()
{
	char* s = (char*)malloc(MaxSize);
	scanf("%s", s);
	SStack num_stack, op_stack;
	init_stack(num_stack);
	init_stack(op_stack);
	return 0;
}