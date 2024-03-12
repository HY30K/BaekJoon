#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, K, X;

	vector<int>visited;
	vector<int>answer;
	vector<vector<int>>adj;
	queue <int> q;

	cin >> N >> M >> K >> X;

	adj.resize(N + 1);
	visited.resize(N + 1, -1);

	int num1, num2;

	for (int i = 0; i < M; i++) {
		cin >> num1 >> num2;

		adj[num1].push_back(num2);
	}

	q.push(X);
	visited[X] = 0;

	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		for (int j = 0; j < adj[now].size(); j++)
		{
			int next = adj[now][j];
			if (visited[next] == -1)
			{
				q.push(next);
				visited[next] = visited[now] + 1;

				if (visited[next] == K)
					answer.push_back(next);
			}
		}
	}

	sort(answer.begin(), answer.end());

	if (answer.empty())
		cout << -1;
	else {
		for (auto iter : answer) {
			cout << iter << endl;
		}
	}
}