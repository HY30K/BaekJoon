#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long n, m;
vector<int> tree;

int main()
{
	cin >> n >> m;

	for (auto i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		tree.push_back(x);
	}

	sort(tree.begin(), tree.end()); 

	int left = 0;
	int right = tree.back();
	int result = 0;

	while (left <= right)
	{
		long long sum = 0;
		int mid = (left + right) / 2;

		for (auto i = 0; i < n; i++)
		{
			if (tree[i] > mid) 
				sum += tree[i] - mid;
		}

		if (sum < m)
		{
			right = mid - 1;
		}
		else
		{
			result = mid;
			left = mid + 1;
		}

	}
	cout << result;
}