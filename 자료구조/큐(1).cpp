#include<iostream>
#include<string>
#include<queue>

using namespace std;

class Queue 
{
	int qsize;

public:
	int* buf;
	int front;
	int rear;

public:
	void InitQueue(int qsize)
	{
		buf = new int[qsize];
		this->qsize = qsize;
		front = rear - 1;
	}

	void Enqueue(int data)
	{
		if (IsFull())
		{
			cout << "ť�� �� á��\n";
			return;
		}
		rear = rear + 1;
		buf[rear] = data;
	}

	int Dequeue()
	{
		if (IsEmpty())
		{
			cout << "ť�� �����\n";
			return - 1;
		}
		return buf[++front];
	}

	int IsFull()
	{
		return rear == qsize - 1;
	}

	int IsEmpty()
	{
		return front == rear;
	}
};

int main()
{
	Queue q1;
	q1.InitQueue(10);
	for (int i = 1; i <= 11; i++)
	{
		cout << i << " �Է�\n";
		q1.Enqueue(i);
	}
	cout << endl;

	while (!q1.IsEmpty())
	{
		cout << q1.Dequeue() << " ���\n";
	}
	cout << endl;
	return 0;
}