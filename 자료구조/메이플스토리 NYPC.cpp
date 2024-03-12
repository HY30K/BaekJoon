#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main()
{
	int N, K;
	unordered_set<string> s;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		s.insert(str);
	}

	cin >> K;

	for (int i = 0; i < K; i++)
	{
		string str;
		cin >> str;
		s.erase(str);
	}

	cout << s.size() << '\n';
	for (auto i : s)
	{
		cout << i << '\n';
	}
}