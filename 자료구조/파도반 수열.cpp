#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	long long p[101] = { 0, 1, 1, 1 };

	while (t--)
	{
		cin >> n;

		for (int i = 4; i <= n; i++)
		{
			p[i] = p[i - 2] + p[i - 3];
		}

		cout << p[n] << '\n';
	}
}