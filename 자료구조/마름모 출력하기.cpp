#include<iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 2 * n; i++) {
		for (int j = 1; j <= 2 * n; j++) {

			// *�� ��ġ���� i , j, n �� ���� ã��
			if (i + j == n + 1) cout << "*";
			else if (i + j == 3 * n + 1) cout << "*";
			else if (i + j == n + 2 * i) cout << "*";
			else if (i + j == n + 2 * j) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
}