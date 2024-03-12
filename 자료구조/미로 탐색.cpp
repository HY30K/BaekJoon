	#include<vector>
	#include<queue>
	#include<iostream>
	using namespace std;

	int solution(vector<vector<int> > maps) {

		int mx = maps[0].size() - 1;
		int my = maps.size() - 1;

		queue<pair<int, int>> q;
		bool isVis[101][101] = { 0 };
		int bfsMap[101][101] = { 0 };

		int dx[] = { 1, 0, -1, 0 };
		int dy[] = { 0, 1, 0, -1 };


		q.push(make_pair(0, 0));
		isVis[0][0] = true;
		bfsMap[0][0] = 1;

		while (!q.empty()) {

			int curX = q.front().first;
			int curY = q.front().second;

			q.pop();

			for (int i = 0; i < 4; i++) {

				int x = curX + dx[i];
				int y = curY + dy[i];

				if (x < 0 || x >= mx || y < 0 || y >= my) continue;

				if (isVis[x][y]) continue;

				if (maps[x][y] == 0) continue;

				isVis[x][y] = true;
				q.push(make_pair(x, y));
				bfsMap[x][y] = bfsMap[curX][curY] + 1;

			}
		}

		if (!bfsMap[mx][my]) return -1;
		else return bfsMap[mx][my];
	}