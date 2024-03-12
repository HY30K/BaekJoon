#include <iostream>
using namespace std;

class Book
{
public:
	string name;
	int price = 0;

	void print()
	{
		cout << "이름: " << name << "  ||  가격: " << price << '\n';
	}
};

int main(void)
{
	int inp, price;
	string name;

	cout << "총 몇권의 책을 저장하고 싶으신가요?: ";
	cin >> inp;
	Book* ptr = new Book[inp];

	cout << "책의 이름과 가격을 띄워쓰기를 기준으로 입력하세요." << '\n';

	for (int i = 0; i < inp; i++)
	{
		cin >> ptr[i].name >> ptr[i].price;
	}

	cout << "소장하고 있는 책 정보" << '\n';
	cout << "========================" << '\n';
	for (int i = 0; i < inp; i++)
	{
		ptr[i].print();
	}
	cout << "========================" << '\n';
}