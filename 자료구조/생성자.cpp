#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

class Pizza
{
public:
	Pizza(int s) : price(s) {}
	int price;
};

void makeDouble(Pizza& p)
{
	p.price *= 2;
}

int main()
{
	Pizza pizza(10);
	makeDouble(pizza);
	cout << pizza.price << "인치 피자" << '\n';
}