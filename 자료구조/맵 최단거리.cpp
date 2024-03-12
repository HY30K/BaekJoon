#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	int my = maps.size();
	int mx = maps[0].size();

	queue<pair<int, int>> q;
	vector<vector<int>> visited;

	visited.resize(my, vector<int>(mx - 1));
	q.push({ 0,0 });
	visited[0][0] = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= mx || ny >= my)
				continue;
			if (visited[nx][ny] == -1 && maps[nx][ny] == 1)
			{
				q.push({ nx, ny });
				visited[nx][ny] = visited[x][y] + 1;
			}
		}
	}
	return visited[mx - 1][my - 1];
}