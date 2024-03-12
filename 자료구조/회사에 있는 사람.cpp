#include <iostream>  
#include <string>
#include <set>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    set<string> s;

    for (int i = 0; i < n; i++) 
    {
        string name, el;
        cin >> name >> el;

        if (el == "enter")
            s.insert(name);
        else
            s.erase(name);
    }

    for (auto iter = s.rbegin(); iter != s.rend(); iter++)
        cout << *iter << "\n";

    return 0;
}