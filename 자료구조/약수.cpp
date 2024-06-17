#include <iostream>
#include <algorithm>
using namespace std;

int arr[51];
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	// 약수의 경우 최솟값과 최댓값을 곱하게 되면 나옵니다 ex) 16 (2 4 8) 2 * 8
	int ans = arr[0] * arr[n - 1];

	cout << ans;
}