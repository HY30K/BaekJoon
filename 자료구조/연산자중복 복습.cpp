#include<iostream>

using namespace std;
class Box {
	double length;
	double width;
	double height;
public:
	Box(double l = 0, double w = 0, double h = 0) : length{ l }, width{ w }, height{ h } { }

	double getVolume() {
		return length * width * height;
	}

	Box& operator+(const Box& box) {
		Box temp;
		temp.length = length + box.length;
		temp.width = width + box.width;
		temp.height = height + box.height;

		return temp;
	}

	bool operator==(Box& box) {
		return (getVolume() == box.getVolume());;
	}

	bool operator<(Box& box) {
		return (getVolume() < box.getVolume());;
	}

};

int main() {
	Box a(10, 10, 10), b(20, 20, 20), c;
	c = a + b;

	cout << (a == b);

	cout << (a < b);
}