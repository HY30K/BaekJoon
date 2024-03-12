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

	cout << "띄워쓰기를 기준으로 문자열 2개를 입력하시오: ";
	cin >> a >> b;
	cout << "띄워쓰기를 기준으로 정수 2개를 입력하시오: ";
	cin >> c >> d;
	cout << "띄워쓰기를 기준으로 실수 2개를 입력하시오: ";
	cin >> e >> f;
	cout << "swap()함수 호출 후 결과입니다." << endl;

	swap2(a, b);
	swap2(c, d);
	swap2(e, f);

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
	cout << e << " " << f << endl;

}