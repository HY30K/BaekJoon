#include <iostream>
using namespace std;

int main()
{
	// ¼±ÅÃ

	int a[101], n, tmp, idx, i, j;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[idx])
				idx = j;
		}

		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}

	for (i = 0; i < n; i++)
		cout << a[i] << " ";

	// »ðÀÔ

	for (i = 1; i < n; i++)
	{
		tmp = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > tmp)
				a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = tmp;
	}

	for (i = 0; i < n; i++)
		cout << a[i] << " ";
}