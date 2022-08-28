#include <stdio.h>

typedef struct {
	int a;
	char b;
	short c;
}record;

bool judge_operation(char seq[], int len)
{
	int x = 0, y = 0;
	for (int i = 0; i < len; i ++)
	{
		if (seq[i] == 'I')
		{
			x++;
		}
		else
		{
			y++;
		}
		if (y > x)
		{
			return false;
		}
	}
	if (x == 0 && y == 0)
	{
		return true;
	}
	return false;
}

void modification(int& i)
{
	i = 3;
	i = 4;
	i = 5;
}

//int main()
//{
//	/*char seq[] = { 'I', 'I', 'O', 'I', 'O', 'I', 'O', 'O' };*/
//	int i = 0;
//	modification(i);
//	printf("\n");
//	return 0;
//}

int main()
{
	int a;
	record r;
	r.a = 1;
	r.b = 2;
	r.c = 3;
	printf("整型变量a大小为:%d, 结构体record大小为:%d\n", sizeof(a), sizeof(record));
	return 0;
}