#include <string>
#include <vector>

using namespace std;

int visited[200];

void DFS(int now, int n, vector<vector<int>> computers)
{

	visited[now] = 1;

	for (int i = 0; i < n; i++)
	{

		if (visited[i] == 0 && computers[now][i] == 1)
		{

			DFS(i, n, computers);

		}

	}

}

int solution(int n, vector<vector<int>> computers)
{

	int answer = 0;

	for (int i = 0; i < n; i++)
	{

		if (visited[i] == 0)
		{

			DFS(i, n, computers);

			answer++;

		}

	}

	return answer;

}