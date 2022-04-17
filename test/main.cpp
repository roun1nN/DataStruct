#include <stdio.h>

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

int main()
{
	char seq[] = { 'I', 'I', 'O', 'I', 'O', 'I', 'O', 'O' };
}