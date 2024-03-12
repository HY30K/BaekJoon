#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, start, end;
	int cnt = 0, last = 0;

	cin >> n;

	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> start >> end;
		v[i] = { end, start };
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].second >= last)
		{
			cnt++;
			last = v[i].first;
		}
	}

	cout << cnt;
}
