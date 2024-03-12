#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	int cnt_y = 0, cnt_p = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'p')
			cnt_p++;
		
		if (str[i] == 'y')
			cnt_y++;
	}

	if (cnt_p == cnt_y)
		cout << "true";
	else
		cout << "false";
}