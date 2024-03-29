#include<iostream>

#define PRINTLN(N) cout << N << endl; 

using namespace std;

class BOX
{
public:
    static int count;
    BOX(double l = 0, double w = 0, double h = 0) {

        this->h = h;
        this->w = w;
        this->l = l;

    };

    friend BOX& operator+(BOX first, BOX secound) {

        BOX* b = new BOX(first.l + secound.l, first.w + secound.w, first.h + secound.h);

        return *b;

    }


    friend bool operator==(BOX first, BOX secound) {

        return(first.h == secound.h && first.l == secound.l && first.w == secound.w);

    }


    friend bool operator<(BOX first, BOX secound) {

        return(first.h < secound.h&& first.l < secound.l&& first.w < secound.w);

    }

    double Volume() {

        return l * w * h;

    }

private:

    double l, w, h;

};

int BOX::count = 0;

int main() {

    BOX b1(1, 2, 3);
    BOX b2(4, 5, 6);

    PRINTLN(BOX::count);
    PRINTLN((b1 + b2).Volume());

}