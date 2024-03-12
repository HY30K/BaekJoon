#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cout.tie();
	cin.tie();

	unordered_set <int> s1;
	vector<int> v1;
	int m, a;

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		s1.insert(a);
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;
		if (s1.find(a) == s1.end())
			v1.push_back(0);
		else
			v1.push_back(1);
	}

	for (auto iter : v1)
		cout << iter << " ";
}