#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
#include <windows.h>
#include <vector>
using namespace std;

int fibonacci(int num)
{
	if (num <= 1)
		return 1;
	else
		return num * fibonacci(num - 1);
}

int fibonacci(int num)
{
	if (num <= 2)
		return 1;
	else
		return  fibonacci(num - 2) + fibonacci(num - 1);
}

int main()
{
	cout << "=============================================" << '\n';
	int inp;
	cout << "팩토리얼 값을 구하고 싶은 숫자를 입력하시오: ";
	cin >> inp;

	cout << inp << "! = " << fibonacci(inp) << '\n';

	cout << "=============================================" << '\n';

	cout << "피보나치 수열의 몇번째 수를 알고싶나요?: ";
	cin >> inp;

	cout << inp << "번째 피보나치 수열: " << fibonacci(inp) << '\n';
}