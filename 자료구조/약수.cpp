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

	// ����� ��� �ּڰ��� �ִ��� ���ϰ� �Ǹ� ���ɴϴ� ex) 16 (2 4 8) 2 * 8
	int ans = arr[0] * arr[n - 1];

	cout << ans;
}