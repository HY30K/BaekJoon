#include <iostream>
using namespace std;

class Book
{
public:
	Book(string s, int i) : s(s), i(i) {}
	string s;
	int i;

	void print()
	{
		cout << "����: " << s << "|| ����: " << i << '\n';
	}
};

int main(void)
{
	Book books[2] =
	{
		Book("��� C++", 25000),
		Book("��� C", 22000)
	};

	cout << "�����ϰ� �ִ� å ����" << '\n';
	cout << "==========================" << '\n';
	for (Book& b : books)
		b.print();
	cout << "==========================" << '\n';
	return 0;
}