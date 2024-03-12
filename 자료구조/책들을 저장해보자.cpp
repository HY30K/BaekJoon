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
		cout << "제목: " << s << "|| 가격: " << i << '\n';
	}
};

int main(void)
{
	Book books[2] =
	{
		Book("어서와 C++", 25000),
		Book("어서와 C", 22000)
	};

	cout << "소장하고 있는 책 정보" << '\n';
	cout << "==========================" << '\n';
	for (Book& b : books)
		b.print();
	cout << "==========================" << '\n';
	return 0;
}