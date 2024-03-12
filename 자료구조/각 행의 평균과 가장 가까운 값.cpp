#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	int grid[9][9];

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cin >> grid[i][j];
		}
	}

	for (int i = 0; i < 9; ++i)
	{
		int rowSum = 0;

		for (int j = 0; j < 9; ++j)
		{
			rowSum += grid[i][j];
		}

		// 평균
		int average = rowSum / 9;

		// 가까운 값
		int closestValue = grid[i][0];
		int minDiff = abs(average - closestValue);

		for (int j = 1; j < 9; ++j)
		{
			int diff = abs(average - grid[i][j]);

			if (diff < minDiff || (diff == minDiff && grid[i][j] > closestValue))
			{
				closestValue = grid[i][j];
				minDiff = diff;
			}
		}

		cout << round(average) << " " << closestValue << endl;
	}
}