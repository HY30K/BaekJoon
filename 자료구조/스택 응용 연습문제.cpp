#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

stack<int> s;
stack<int> s2;

void BracketTest(int index)
{
	if (s2.empty() || s2.top() != index)
	{
		cout << "괄호 검사 실패";
		exit(1);
	}
	s2.pop();
}

int main()
{
#pragma region 1번문제
	string inp;
	int cnt = 1;

	cout << "수식	 :";
	cin >> inp;
	cout << "괄호 번호:";
	for (int i = 0; i < inp.size(); i++)
	{
		if (inp[i] == '(')
		{
			s.push(cnt++);
			cout << s.top();
		}
		else if (inp[i] == ')')
		{
			cout << s.top();
			s.pop();
		}
	}
	cout << '\n';
#pragma endregion
#pragma region 2번문제
	string inp2;

	cin >> inp2;
	for (int i = 0; i < inp2.size(); ++i)
	{
		if (inp2[i] == '{')
			s2.push(1);
		else if (inp2[i] == '[')
			s2.push(2);
		else if (inp2[i] == '(')
			s2.push(3);
		else if (inp2[i] == '}')
			BracketTest(1);
		else if (inp2[i] == ']')
			BracketTest(2);
		else if (inp2[i] == ')')
			BracketTest(3);
	}

	if (s2.empty())
		cout << "괄호 검사 성공";
	else
		cout << "괄호 검사 실패";
#pragma endregion
}
