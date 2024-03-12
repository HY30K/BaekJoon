#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

stack<int> s1;
stack<char> s2;

void convert(int inp)
{
	if (inp == 0)
		s1.push(0);
	else if (inp == 1)
		s1.push(1);
	else
	{
		s1.push(inp % 2);
		convert(inp / 2);
	}
}

int main()
{
#pragma region 10진수를 2진수로 변환하기
	int inp;

	cout << "10진수 값을 입력하세요: ";
	cin >> inp;
	try
	{
		if (inp < 0)
			throw inp;

		convert(inp);

		while (!s1.empty())
		{
			cout << s1.top();
			s1.pop();
		}
		cout << '\n';
	}
	catch (int inp)
	{
		cout << "음수 " << inp << "를 입력하셨습니다. 양수로 입력하세요." << '\n';
	}
#pragma endregion
#pragma region 콤마 넣기
	string inp2;
	cin >> inp2;
	for (int i = inp2.size() - 1; i >= 0; i--)
	{
		if (i % 3 == 0)
		{
			s2.push(',');
			s2.push(inp2[i]);
		}
		else
			s2.push(inp2[i]);
	}

	while (!s2.empty())
	{
		cout << s2.top();
		s2.pop();
	}
#pragma endregion
}
