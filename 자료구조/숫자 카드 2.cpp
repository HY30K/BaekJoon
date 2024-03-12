#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() 
{
    int N, K;

    cin >> N;
    vector<int> v(N);
    vector<int> answer(N);

    for (int i = 0; i < N; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cin >> K;
        auto upper = upper_bound(v.begin(), v.end(), K);
        auto lower = lower_bound(v.begin(), v.end(), K);

        answer[i] = upper - lower;
    }

    for (auto n : answer)
        cout << n << " ";

    return 0;
}