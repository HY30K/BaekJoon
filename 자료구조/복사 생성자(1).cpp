#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

class Pizza
{
	int radius;
public:
	Pizza(int r = 0) : radius{ r } {}
	~Pizza() {}

	void setRadius(int r) { radius = r; }

	void print()
	{
		cout << "Pizza(" << radius << ")" << endl;
	}
};

void upgarade(Pizza* p) { p->setRadius(20); }

class Complex
{
public:
	double real, imag;
	Complex(double r, double img) :real(r), imag(img) {};
	void print() { cout << real << "+" << imag << "i" << endl; }
};
Complex add(const Complex& a, const Complex& b)
{
	return Complex(a.real + b.real, a.imag + b.imag);
}

int main()
{
	Pizza obj(10);
	upgarade(&obj);
	obj.print();

	//객체를 함수로 전달하기(1)
	Complex c1{ 1, 2 }, c2{ 3,4 };
	Complex t = add(c1, c2);
	t.print();

	return 0;
}