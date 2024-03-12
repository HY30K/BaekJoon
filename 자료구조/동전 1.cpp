#include <iostream>
using namespace std;

int coin[101];
int dp[10001] = { 1 };

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> coin[i];

	for (int i = 1; i <= n; i++)
	{
		for (int j = coin[i]; j <= k; j++)
		{
			dp[j] += dp[j - coin[i]];
		}
	}

	cout << dp[k];
}