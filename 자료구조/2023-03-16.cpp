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
	cout << "���丮�� ���� ���ϰ� ���� ���ڸ� �Է��Ͻÿ�: ";
	cin >> inp;

	cout << inp << "! = " << fibonacci(inp) << '\n';

	cout << "=============================================" << '\n';

	cout << "�Ǻ���ġ ������ ���° ���� �˰�ͳ���?: ";
	cin >> inp;

	cout << inp << "��° �Ǻ���ġ ����: " << fibonacci(inp) << '\n';
}