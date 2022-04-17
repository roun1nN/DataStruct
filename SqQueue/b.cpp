#define MaxSize 50

class b
{

	typedef int ElemType;
	typedef struct {
		ElemType data[MaxSize];
		int front;
		int rear;
		int size;
	} SqQueue;

public:
	b();
	~b();
	SqQueue get_queue()
	{
		return this->queue;
	}

private:
	SqQueue queue;
};