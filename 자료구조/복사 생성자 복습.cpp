#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

class Myclass {
    int x;
    char c;
    string s;
    
    // �⺻ ������
    Myclass() {
        x = 0;
        c = '\0';
        s = "";
    }

    // �Ű������� �ִ� ������
    Myclass(int a, char b, const std::string& str) {
        x = a;
        c = b;
        s = str;
    }

    // ���� ������
    Myclass(const Myclass& other) {
        x = other.x;
        c = other.c;
        s = other.s;
    }
};

int main()
{
	// 1��: 1��
	// 2��: 4��
	// 3��: ���� ������ ��ü�� �ʱ�ȭ �ϴ� ��� / �Լ��� ��ü�� ��ȯ�ϴ� ��� / ��ü�� �Լ��� �����ϴ� ���
    // 4��: ��������
    // 5��: Ŭ������ ��� ������ ���� �޸� �Ҵ��� �޾��� ��
    // 6��: ����
}