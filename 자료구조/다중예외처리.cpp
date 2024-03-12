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
            throw "양수를 입력하세요";
        }
        if (age < 25)
        {
            throw "청소년이 아닌데요";
        }
        if (age > 120)
        {
            throw "다시 입력해주세요";
        }

    }
    catch (const char* t)
    {
        cout << t << endl;
        goto cinAgain;
    }

    cout << age << "세 이시네요" << endl;
}