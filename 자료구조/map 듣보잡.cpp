#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, int> map1;
	map<string, int> map2;
	string noSound;
	string noSee;
	int M, N, count = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> noSound;
		map1[noSound] = 1;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> noSee;
		if (map1[noSee] == 1) 
		{
			count++;
			map2[noSee];
		}
	}

	cout << count << endl;
	for (auto iter = map2.begin(); iter != map2.end(); iter++)
	{
		cout << iter->first << endl;
	}
}