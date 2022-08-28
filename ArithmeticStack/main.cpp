// abandoned, too complicated for me to finish;
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
	// 40~47
	/*printf("%d\n", '+');
	printf("%d\n", '-');
	printf("%d\n", '*');
	printf("%d\n", '/');
	printf("%d\n", '(');
	printf("%d\n", ')');*/
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] < 40 || s[i] >58)
		{
			printf("ÊäÈë·Ç·¨\n");
			return 1;
		}
		if (s[i] >=48 )
		{

		}
	}
	return 0;
}