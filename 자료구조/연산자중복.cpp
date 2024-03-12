#include<iostream>

using namespace std;

class Vector2 {

private:
    double x, y;

public:
    Vector2(double x, double y) {

        this->x = x;
        this->y = y;

    }
    Vector2 operator+(const Vector2& v2) {

        Vector2 temp = *this;

        temp.x += v2.x;
        temp.y += v2.y;

        return temp;

    }
    void Print() {

        cout << y << endl;

    }

};

class Counter
{

private:

    int num;

public:

    Counter(int i)
    {

        num = i;

    }

    int GetValue() const { return num; }

    void SetValue(int i) {

        num = i;

    }
    ~Counter() {}
    Counter& operator++() {


        num += 1;

        return *this;

    }



};

class Time {

private:
    int hour, min, sec;
public:
    Time(int hour, int min, int sec) {

        this->hour = hour;
        this->min = min;
        this->sec = sec;

    }

    bool operator==(Time& t2) {

        return (this->hour == t2.hour && this->min == t2.min && this->sec == t2.sec);

    }

    bool operator!=(Time& t2) {

        return (this->hour != t2.hour && this->min != t2.min && this->sec != t2.sec);

    }


};


int main() {

    Vector2 v1(1, 2), v2(3, 4);

    Vector2 v3 = v1 + v2;

    v3.Print();

    Counter c1(1);
    ++c1;
    cout << c1.GetValue() << endl;

    Time t1(1, 2, 3), t2(4, 5, 6), t3(1, 2, 3);

    cout << (t1 == t3) << endl;
    cout << (t1 == t2) << endl;
}