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
		cout << "������ �Է��Ͻÿ� (����: -1) : ";
		cin >> inp;
		if (inp == -1)
			break;
		v.push_back(inp);
	}

	for (int i : v)
	{
		cal += i;
	}

	cout << "���������: " << cal / v.size();
}