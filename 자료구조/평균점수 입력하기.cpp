#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
#include <windows.h>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int inp, cal = 0;
	while (true)
	{
		cout << "점수를 입력하시오 (종료: -1) : ";
		cin >> inp;
		if (inp == -1)
			break;
		v.push_back(inp);
	}

	for (int i : v)
	{
		cal += i;
	}

	cout << "평균점수는: " << cal / v.size();
}