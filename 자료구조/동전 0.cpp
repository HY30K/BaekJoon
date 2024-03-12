#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, cnt = 0;

    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        while (k - v[i] >= 0)
        {
            k -= v[i];
            ++cnt;
        }
    }

    cout << cnt << endl;
}