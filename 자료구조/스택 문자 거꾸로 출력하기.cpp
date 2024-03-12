#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main()
{
	stack<char> s1;

	string str;

	char ch;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
		s1.push(str[i]);
	
	while ((ch = cin.get()) != '\n')
	{
		s1.push(ch);
	}

	while (!s1.empty())
	{
		cout << s1.top();
		s1.pop();
	}
}
