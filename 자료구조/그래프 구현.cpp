#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

#define MAX_VTXS 256

class AdjMathGraphVEC 
{

private:
    vector<vector<int>> arr;
    vector<char> vert;
    int size;
    vector<bool> isVis;
    unordered_set<int> isIn;
    string output;

public:

    AdjMathGraphVEC(int size) {

        this->size = size;

        isVis.resize(size, false);
        arr.resize(size);

        for (int i = 0; i < size; i++) {

            arr[i].resize(size);

        }

    }

    void InsertVERT(char c) {

        vert.push_back(c);

    }

    void InsertEdge(int x, int y) {

        arr[x][y] = 1;
        arr[y][x] = 1;

    }

    void Display() {

        cout << ' ' << ' ';

        for (int i = 0; i < size; i++) cout << vert[i] << ' ';

        cout << endl;

        for (int i = 0; i < size; i++) {

            cout << vert[i] << ' ';

            for (int j = 0; j < size; j++) {

                cout << arr[i][j] << ' ';

            }

            cout << endl;

        }

    }

    void DFS(int node) {

        isVis[node] = true;
        cout << node << " ";

        for (int i = 0; i < size; i++) {

            if (node + i > size - 1) return;

            if (isVis[node + i] == false && arr[node][node + i] != 0) {

                DFS(node + i);

            }

        }

    }

    void BFS(int node) {

        isVis[node] = true;
        cout << node << " ";

        for (int i = 0; i < size; i++) {

            if (node + i > size - 1) break;

            if (isVis[node + i] == false && arr[node][node + i] != 0) {

                isIn.insert(i);

            }

        }

        for (auto i : isIn) {

            if (isVis[i] == false) {

                BFS(i);

            }

        }

    }

};


int main()
{
	int n, m, temp1, temp2;
	cout << "정점의 개수와 간선의 수 :";
	cin >> n >> m;
	cout << "간선의 시작정점과 끝 정점 :" << endl;

    AdjMathGraphVEC g(n);
	for (int i = 0; i < n; i++)
		g.InsertVERT('A' + i);

	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		g.InsertEdge(temp1, temp2);
	}

	cout << "인접 행렬로 표현한 그래프" << endl;

	g.Display();

    cout << "탐색 => ";

    g.DFS(0);

	return 0;
}