#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int arr[100010];

void BinarySearch(int key);

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	int num;

	for (int i = 0; i < N; i++)
	{

		cin >> num;
		arr[i] = num;

	}

	stable_sort(arr, arr + N);

	cin >> M;
	for (int i = 0;i < M;i++)
	{

		cin >> num;
		BinarySearch(num);

	}

	return 0;

}

void BinarySearch(int key)
{

	int start = 0;
	int end = N - 1;

	while (end >= start)
	{

		int mid = (start + end) / 2;

		if (arr[mid] == key)
		{

			cout << 1 << "\n";
			return;

		}
		else if (arr[mid] > key)
		{

			end = mid - 1;

		}
		else
		{

			start = mid + 1;

		}

	}

	cout << 0 << "\n";
	return;
}