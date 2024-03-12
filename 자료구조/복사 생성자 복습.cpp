#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

class Myclass {
    int x;
    char c;
    string s;
    
    // 기본 생성자
    Myclass() {
        x = 0;
        c = '\0';
        s = "";
    }

    // 매개변수가 있는 생성자
    Myclass(int a, char b, const std::string& str) {
        x = a;
        c = b;
        s = str;
    }

    // 복사 생성자
    Myclass(const Myclass& other) {
        x = other.x;
        c = other.c;
        s = other.s;
    }
};

int main()
{
	// 1번: 1번
	// 2번: 4번
	// 3번: 같은 종류의 객체로 초기화 하는 경우 / 함수가 객체를 반환하는 경우 / 객체를 함수에 전달하는 경우
    // 4번: 위에있음
    // 5번: 클래스의 멤버 변수가 동적 메모리 할당을 받았을 때
    // 6번: 포기
}