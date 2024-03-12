#include <iostream>

using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
public:
    double Volume() {
        return length * width * height;
    }

    Box(double a, double b, double c)
    {
        length = a;
        width = b;
        height = c;
    }

    friend Box& operator+(const Box first, const Box secound)
    {

        Box *b = new Box(first.height + secound.height, first.width + secound.width, first.length + secound.length);

        return *b;

    }

    friend bool operator ==(const Box first, const Box second)
    {
        bool one = first.height == second.height;
        bool two = first.length == second.length;
        bool three = first.width == second.width;

        return(one & two & three);
    }

};
int main(void) {
    Box Box1(1.0f, 2.0, 3.0);
    Box Box2(1.0f, 2.0, 5.0);
    cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << (Box1 + Box2).Volume() << endl;
    return 0;
}