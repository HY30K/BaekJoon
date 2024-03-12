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
	unordered_map<string, int> map;
	unordered_map<int, string> map2;
	int M, N;
	string name;
	string str;
	cin >> M >> N;

	for (int i = 1; i <= M; i++)
	{
		cin >> name;
		map[name] = i;
		map2[i] = name;
	}

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (isdigit(str[0]))
		{
			cout << map2[stoi(str)] << '\n';
		}
		else
		{
			cout << map[str] << '\n';
		}
	}
}