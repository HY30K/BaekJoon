#include <string>
#include <vector>

using namespace std;

int answer = 0;
int targetNum;
vector<int> v;

void DFS(int n, int currentSum) {
    if (n == v.size()) {
        if (currentSum == targetNum) {
            answer++;
        }
        return;
    }

    // 현재 숫자를 더하는 경우
    DFS(n + 1, currentSum + v[n]);

    // 현재 숫자를 빼는 경우
    DFS(n + 1, currentSum - v[n]);
}

int solution(vector<int> numbers, int target) {
    targetNum = target;
    v = numbers;
    DFS(0, 0);
    return answer;
}
