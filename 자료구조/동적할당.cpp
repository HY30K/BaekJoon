#include <iostream>
using namespace std;

class Book
{
public:
	string name;
	int price = 0;

	void print()
	{
		cout << "�̸�: " << name << "  ||  ����: " << price << '\n';
	}
};

int main(void)
{
	int inp, price;
	string name;

	cout << "�� ����� å�� �����ϰ� �����Ű���?: ";
	cin >> inp;
	Book* ptr = new Book[inp];

	cout << "å�� �̸��� ������ ������⸦ �������� �Է��ϼ���." << '\n';

	for (int i = 0; i < inp; i++)
	{
		cin >> ptr[i].name >> ptr[i].price;
	}

	cout << "�����ϰ� �ִ� å ����" << '\n';
	cout << "========================" << '\n';
	for (int i = 0; i < inp; i++)
	{
		ptr[i].print();
	}
	cout << "========================" << '\n';
}