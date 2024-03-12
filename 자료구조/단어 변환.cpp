#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

bool ChangeAble(string origin, string word) {
	int changeCnt = 0;

	for (int i = 0; i < origin.length(); i++) {
		if (origin[i] != word[i]) changeCnt++;
	}

	return changeCnt == 1;
}


int solution(string begin, string target, vector<string> words) {

	unordered_map<string, int> visMap;
	queue<string> iterQ;
	visMap[begin] = 1;
	iterQ.push(begin);

	while (!iterQ.empty())
	{
		auto cur = iterQ.front();
		iterQ.pop();

		for (int i = 0; i < words.size(); i++) 
		{
			if (visMap[words[i]] == 0 && ChangeAble(cur, words[i])) 
			{
				visMap[words[i]] = visMap[cur] + 1;

				iterQ.push(words[i]);

				if (words[i] == target)
					return visMap[words[i]] - 1;
			}
		}
	}

	return 0;
}