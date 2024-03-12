#include<iostream>
#include<vector>
#define PRINTLN(N) std::cout << N
#define FLOAT_TO_INT(x) ((x)>=0?(int)((x)+0.5):(int)((x)-0.5))

using namespace std;

int main() 
{
#pragma region 1¹ø
	int nArr[9][9] = {};

	for (int x = 0; x < 9; x++)
	{
		for (int y = 0; y < 9; y++)
		{
			cin >> nArr[x][y];
		}
	}

	for (int x = 0; x < 9; x++)
	{
		float result = 0; int uSa = 0, che = 100;
		for (int y = 0; y < 9; y++)
		{
			result += nArr[x][y];
		}

		result /= 9;
		result = FLOAT_TO_INT(result);

		for (int y = 0; y < 9; y++)
		{
			int uChe = result >= nArr[x][y] ? result - nArr[x][y] : nArr[x][y] - result;
			if (che > uChe)
			{
				che = uChe;
				uSa = nArr[x][y];
			}
			else if (che == uChe)
			{
				che = uChe;
				uSa = uSa > nArr[x][y] ? uSa : nArr[x][y];
			}
		}

		cout << FLOAT_TO_INT(result) << " " << uSa << endl;
	}
#pragma endregion
#pragma region ÁÖ¸ù
	int n, m, cnt = 0;
	cin >> n >> m;
	vector <int> gabot(n);

	for (int i = 0; i < n; i++)
		cin >> gabot[i];

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (gabot[i] + gabot[j] == m)
				cnt++;
		}
	}
	cout << cnt << '\n';
#pragma endregion
}