#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;

		while (num > 0) {
			if (num % 10 == 7) {
				cnt++;
			}
			num /= 10;
		}
	}

	cout << cnt;
}