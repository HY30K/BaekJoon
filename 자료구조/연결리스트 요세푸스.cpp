#include <iostream>
#include <queue>
#include <list>

using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	list<int> circleList;
	for (int i = 1; i <= n; i++)
		circleList.push_back(i);

	list<int>::iterator target = circleList.begin();

	cout << '<';
	while (n > 0)
	{
		for (int i = 1; i < k; i++)
		{
			target++;
			if (target == circleList.end()) target = circleList.begin();
		}

		if (n == 1)
		{
			cout << *target;
			break;
		}

		cout << *target << ", ";
		n--;

		target = circleList.erase(target);
		if (target == circleList.end()) target = circleList.begin();
	}
	cout << '>';
}