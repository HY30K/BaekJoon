#include <iostream>
#include <stack>
#include<vector>
using namespace std;
stack<double>s;
int alphabet[27], temp;

double calcPostfix(string str) {
	double op1, op2;
	char ch;
	for (int i = 0; i < str.size(); i++) {
		ch = str[i];
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
		{
			s.push(alphabet[ch - 'A']);
		}
		else { // 연산자이면 피연산자를 스택에서 제거
			op2 = s.top();
			s.pop();
			op1 = s.top();
			s.pop();

			switch (ch) { // 연산을 수행하고 스택에 저장
			case'+':
				s.push(op2 + op1);
				break;
			case'-':
				s.push(op1 - op2);
				break;
			case'*':
				s.push(op1 * op2);
				break;
			case'/':
				s.push(op1 / op2);
				break;
			}
		}
	}
	return s.top();
}

int main()
{
	int num;
	string str;
	cin >> num >> str;
	for (int i = 0; i < num; i++)
	{
		cin >> alphabet[i];

	}
	cout << fixed;                 //소수점 자릿수 고정
	cout.precision(2);
	cout << calcPostfix(str);

}