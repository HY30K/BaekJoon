#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{

	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	cout << "���� �������� �Է��Ͻÿ�: ";
	cin >> pizza_slices;
	cout << "������� �Է��Ͻÿ�: ";
	cin >> persons;
	try
	{
		if (persons == 0)
			throw persons;
		slices_per_person = pizza_slices / persons;
		cout << "�ѻ���� ���ڴ� " << slices_per_person << "�Դϴ�." << endl;
	}
	catch (int e)
	{
		cout << "���ܻ�Ȳ �߻�" << '\r';
		Sleep(1000);
		cout << "�Է°��� " << e << "�Դϴ�";
	}

}