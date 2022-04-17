#include <iostream>

#define MaxSize 10
typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int front;
	int rear;
} SqQueue_a;

typedef struct {
	ElemType data[MaxSize];
	int front;
	int rear;
	int actualSize;
} SqQueue_b;

typedef struct {
	ElemType data[MaxSize];
	int front;
	int rear;
	int flag; // 用于存储上一次执行的操作类型(修改/删除)
} SqQueue_c;

void init_a(SqQueue_a &q)
{
	q.front = 0;
	q.rear = MaxSize - 1;
}

bool enQueue_a(SqQueue_a& q, ElemType e)
{
	if ((q.rear + 1) % MaxSize != q.front)
	{
		q.data[q.rear] = e;
		q.rear = (q.rear + 1) % MaxSize;
		return true;
	}
	return false;
}

bool deQueue_a(SqQueue_a& q, ElemType &e)
{
	if (q.front != q.rear)
	{
		e = q.data[q.front];
		q.front = (q.front + 1) % MaxSize;
		return true;
	}
	return false;
}

int main()
{
	SqQueue_a qa;

}