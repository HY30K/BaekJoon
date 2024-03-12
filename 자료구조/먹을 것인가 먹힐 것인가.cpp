#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int testCase, A, B;
	
	cin >> testCase;

	while (testCase--)
	{
		cin >> A >> B;

		vector<int> a(A), b(B);

		for (auto& x : a)
			cin >> x;
		for (auto& x : b)
			cin >> x;

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		int result = 0;

		for (auto& x : a)
		{
			result += lower_bound(b.begin(), b.end(), x) - b.begin();
		}

		cout << result << endl;
	}
}
