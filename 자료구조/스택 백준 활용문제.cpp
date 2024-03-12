#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<string>
using namespace std;

int main()
{
#pragma region "좋은단어"

	int t, cnt = 0;
	string str;
	cin >> t;
	while (t--)
	{
		stack<char>st;
		cin >> str;
		for (int i = 0; i < str.size(); i++)
		{
			if ((st.size()) && (st.top() == str[i]))
			{
				st.pop();
			}
			else
			{
				st.push(str[i]);
			}
		}
		if (st.empty()) cnt++;
	}
	cout << cnt;

#pragma endregion

#pragma region "기차문제"

	int repeat = 0;
	int input;
	int checkNum = 1;
	string answer = "";
	stack <int> s;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		s.push(input);
		answer += 'P';
		while (!s.empty() && s.top() == checkNum)
		{
			answer += 'O';
			s.pop();
			checkNum++;
		}
	}

	if (s.empty())
		cout << answer;
	else
		cout << "impossible";
#pragma endregion
}

#pragma region "올바른 괄호"

bool solution(string s)
{
	bool answer = true;
	stack<char> stk;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
			stk.push('(');
		else
		{
			if (!stk.empty() && stk.top() == '(')
				stk.pop();
			else
				stk.push(')');
		}
	}
	if (stk.empty())
		return true;
	else
		return false;
}
#pragma endregion