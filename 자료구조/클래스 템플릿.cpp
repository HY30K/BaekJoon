#include<iostream>
using namespace std;

template<class T>
class Circle
{
	const static double PI;
public:
	T a;
	T getArea()
	{
		return (a * a) * PI;
	}
};

const double Circle<int>::PI = 3;
const double Circle<double>::PI = 3.141592;

int main()
{
	Circle <int> c1{ 2 };
	Circle <double> c2{ 2.5 };

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
}