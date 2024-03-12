#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int odd = 1, even = 1;

	vector<int> v(3);

	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
		if (v[i] % 2 != 0)
			odd *= v[i];
		else
			even *= v[i];
	}

	if (odd == 1)
		cout << even;
	else
		cout << odd;
}