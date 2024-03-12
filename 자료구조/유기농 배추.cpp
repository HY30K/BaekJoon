#include <iostream>

using namespace std;

int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };
int row, col, num;
int board[51][51];
int visited[51][51];

void DFS(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny > col || nx < 0 || nx > row) continue;
		if (board[ny][nx] && visited[ny][nx] == 0) {
			DFS(ny, nx);
		}
	}
	return;
}

int main() {
	int testcase, x, y;

	cin >> testcase;
	while (testcase--)
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;
		cin >> row >> col >> num;
		for (int i = 0; i < num; ++i) {
			cin >> x >> y;
			board[y][x] = 1;
		}

		for (int i = 0; i < col; ++i) {
			for (int j = 0; j < row; ++j) {
				if (board[i][j] && visited[i][j] == 0) {
					cnt++;
					visited[i][j]++;
					DFS(i, j);
				}
			}
		}
		cout << cnt << '\n';
	}
}