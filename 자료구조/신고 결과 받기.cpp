#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
	vector<int> answer;
	unordered_map<string, set<string>> report_list;
	unordered_map<string, int> mail_count;

	for (int i = 0; i < report.size(); i++)
	{
		string reporter = report[i].substr(0, report[i].find(" "));
		string reported = report[i].substr(report[i].find(" ") + 1);
		report_list[reported].insert(reporter);
	}

	for (auto i : report_list)
	{
		if (i.second.size() >= k)
		{
			for (auto j : i.second)
				mail_count[j]++;
		}
	}

	for (int i = 0; i < id_list.size(); i++)
		answer.push_back(mail_count[id_list[i]]);

	return answer;
}
