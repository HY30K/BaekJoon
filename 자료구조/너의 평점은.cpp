#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	unordered_map<string, float> m_grades =
	{ {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5},
	  {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0},
	  {"D+", 1.5}, {"D0", 1.0}, {"F", 0} };

	float totalScore = 0, totalGrade = 0;

	for (int i = 0; i < 20; i++)
	{
		string name, grade;
		float score;

		cin >> name >> score >> grade;

		if (grade == "P")
			continue;

		totalScore += score;
		totalGrade += score * m_grades[grade];
	}

	cout << totalGrade / totalScore << '\n';
}