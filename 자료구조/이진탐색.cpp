#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[100001];

void BinarySearch(int ans);

int main()
{
	cin >> n;
	int num;

	for (int i = 0;i < n;i++)
	{
		cin >> num;
		arr[i] = num;
	}

	stable_sort(arr, arr + n);

	cin >> m;
	for (int i = 0;i < m;i++)
	{
		cin >> num;
		BinarySearch(num);
	}

	return 0;
}

void BinarySearch(int ans)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int left = 0;
	int right = n - 1;
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] == ans)
		{
			cout << 1 << '\n';
			return;
		}
		else if (arr[mid] > ans)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	cout << 0 << '\n';
	return;
}