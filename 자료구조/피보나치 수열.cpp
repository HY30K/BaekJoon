#include <iostream>
#include <vector>
#include <string>

using namespace std;
const int MAX = 100;
int arr[MAX], arr2[MAX];
int fibonacci(int n);
int memoization(int n);

int main()
{
	int N;
	cin >> N;

	// 반복문으로 풀기
	arr[0] = arr[1] = 1;

	for (int i = 2; i < N; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[N - 1] << endl;
	cout << fibonacci(N) << endl;
	cout << memoization(N);
}

// 재귀
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

// 메모이제이션
int memoization(int n)
{
	if (n <= 1) return n;
	else return arr2[n] = memoization(n - 1) + memoization(n - 2);
}