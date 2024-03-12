#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, ans = 0, lowNum = 1000;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int num, a;
		cin >> num;

		if (num > k)
			a = num - k;
		else
			a = k - num;

		if (a < lowNum)
		{
			lowNum = a;
			ans = num;
		}
	}

	cout << ans;
}