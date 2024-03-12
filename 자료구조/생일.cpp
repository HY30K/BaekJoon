#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	int inp;
	cin >> inp;

	vector<pair<pair<int, int>, pair<int, string>> > inform(inp);


	for (int i = 0; i < inp; i++)
	{
		cin >> inform[i].second.second >> inform[i].second.first
			>> inform[i].first.second >> inform[i].first.first;
	}

	sort(inform.begin(), inform.end());

	cout << inform[inp - 1].second.second << endl;
	cout << inform[0].second.second;

}