#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main()
{
	set<string> s1;
	set<string> s2;
	string noSound;
	string noSee;
	int M, N;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> noSound;
		s1.insert(noSound);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> noSee;
		if (s1.find(noSee) != s1.end())
		{
			s2.insert(noSee);
		}
	}

	cout << s2.size() << endl;
	for (auto iter : s2)
	{
		cout << iter << "\n";
	}
}
