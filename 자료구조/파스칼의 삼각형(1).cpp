#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<vector<int>>v(31, vector<int>(31));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i)
			{
				v[i][j] = 1;
			}
			else
			{
				v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
			}
		}
	}
	cout << v[n][k];

}