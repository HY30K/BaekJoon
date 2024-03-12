#include <iostream>
#include <string>
#include <stack>
using namespace std;

int priority(char op)
{
    switch (op) {
    case'(': case')': return 0;
    case '+': case'-': return 1;
    case '*':case'/': return 2;
    }
    return -1;
}

string infixToPostfix(string a)
{
    stack<char> s;
    string postfix = "";
    char ch, top_op;
    for (int i = 0; i < a.size(); i++) {
        ch = a[i];
        switch (ch) {
        case '+': case '-': case '*': case '/':
            while (!s.empty() && priority(s.top()) >= priority(ch)) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
            break;
        case '(':
            s.push(ch);
            break;
        case ')':
            top_op = s.top();
            while (top_op != '(') {
                postfix += top_op;
                s.pop();
                top_op = s.top();
            }
            s.pop();
            break;
        default: //피연산자
            postfix += ch;
            break;
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}
int main()
{
    while (1) {
        string a;
        cout << "중위표기수식 : ";
        cin >> a;
        cout << "후위표기수식 : " << infixToPostfix(a) << endl;
    }
    return 0;
}