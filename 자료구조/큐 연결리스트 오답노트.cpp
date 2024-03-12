#include <queue>
#include <iostream>

using namespace std;

int main()
{
	queue<int> q;

	int num, count;
	cin >> num >> count;

	for (int i = 1; i <= num; i++)
	{
		q.push(i);
	}

	while (q.size() != 1)
	{
		for (int i = 1; i <= count; i++)
		{
			if (i == count)
			{
				q.pop();
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
		}
	}

	cout << q.front();
}