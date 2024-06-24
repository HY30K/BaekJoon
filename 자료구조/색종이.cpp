#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

int a[100][100];
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, x, y, cnt = 0;
	cin >> n;

	while (n--)
	{
		cin >> x >> y;
		for (int i = y; i < y + 10; i++)
		{
			for (int j = x; j < x + 10; j++)
			{
				if (!a[i][j]) // 0이 아니면 공백이 아니라는 뜻
				{
					cnt++;
					a[i][j] = 1;
				}
			}
		}
	}
	cout << cnt;
}