#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>> v;

	for (int i = 0; i < n / k; i++)
	{
		v.push_back(vector<int>());
		for (int j = 0; j < k; j++)
		{
			int num;
			cin >> num;
			v[i].push_back(num);
		}
	}

	for (int i = 0; i < n / k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << v[i][j] << ' ';
		}
		cout << '\n';
	}
}