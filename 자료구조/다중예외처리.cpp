#include <iostream>

using namespace std;

int main()
{
    int age;

cinAgain:

    cin >> age;
    try
    {
        if (age < 0)
        {
            throw "����� �Է��ϼ���";
        }
        if (age < 25)
        {
            throw "û�ҳ��� �ƴѵ���";
        }
        if (age > 120)
        {
            throw "�ٽ� �Է����ּ���";
        }

    }
    catch (const char* t)
    {
        cout << t << endl;
        goto cinAgain;
    }

    cout << age << "�� �̽ó׿�" << endl;
}