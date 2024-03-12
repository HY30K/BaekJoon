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
#pragma region 10������ 2������ ��ȯ�ϱ�
	int inp;

	cout << "10���� ���� �Է��ϼ���: ";
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
		cout << "���� " << inp << "�� �Է��ϼ̽��ϴ�. ����� �Է��ϼ���." << '\n';
	}
#pragma endregion
#pragma region �޸� �ֱ�
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
