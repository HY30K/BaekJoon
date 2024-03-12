#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
#include <windows.h>
using namespace std;

int main()
{
#pragma region ¹è¿­¿¡¼­ ÃÖ´ñ°ª Ã£±â
	int a[100] = {}, max = 0;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		if (max < a[i]) max = a[i];
		cout << a[i] << " ";
	}

	cout << "\nÃÖ´ñ°ª" << max << '\n';
#pragma endregion
#pragma region Æ½ÅÃÅä
	char board[3][3];
	int x, y, k, i;
	int player = 0;

	fill(&board[0][0], &board[2][2] + 1, ' ');

	for (k = 0; k < 9; k++)
	{
		cout << "(x, y) ÁÂÇ¥: ";
		cin >> x >> y;
		if (player == 0)
		{
			board[x][y] = 'o';
			player = 1;
		}
		else if (player == 1)
		{
			board[x][y] = 'x';
			player = 0;
		}

		for (i = 0; i < 3; i++)
		{
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;
	}

#pragma endregion
}