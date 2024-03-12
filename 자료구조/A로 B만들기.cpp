#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	string str, str2;

	cin >> str >> str2;

	sort(str.begin(), str.end());
	sort(str2.begin(), str2.end());

	if (str == str2)
		cout << 1;
	else
		cout << 0;
}