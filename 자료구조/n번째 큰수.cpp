#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{

	int inp;
	int arr[10] = { 0, };

	cin >> inp;

	for (int i = 0; i < inp; i++) 
	{

		for (int j = 0; j < 10; j++) 
		{

			cin >> arr[j];

		}

		sort(arr, arr + 10);

		cout << arr[7] << endl;

	}

}