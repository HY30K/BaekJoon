#include<iostream>
using namespace std;

template<class T>
void swap2(T& a, T& b)
{

	T temp;
	temp = a;
	a = b;
	b = temp;

}

int main()
{

	string a, b;
	int c, d;
	float e, f;

	cout << "������⸦ �������� ���ڿ� 2���� �Է��Ͻÿ�: ";
	cin >> a >> b;
	cout << "������⸦ �������� ���� 2���� �Է��Ͻÿ�: ";
	cin >> c >> d;
	cout << "������⸦ �������� �Ǽ� 2���� �Է��Ͻÿ�: ";
	cin >> e >> f;
	cout << "swap()�Լ� ȣ�� �� ����Դϴ�." << endl;

	swap2(a, b);
	swap2(c, d);
	swap2(e, f);

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
	cout << e << " " << f << endl;

}