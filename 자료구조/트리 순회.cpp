#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

pair<char, char> node[26];

void Preorder(char now) 
{

    if (now == '.')
        return;

    cout << now;
    Preorder(node[now - 'A'].first);
    Preorder(node[now - 'A'].second);

}

void Inorder(char now) 
{

    if (now == '.')
        return;

    Inorder(node[now - 'A'].first);
    cout << now;
    Inorder(node[now - 'A'].second);

}

void Postorder(char now) 
{

    if (now == '.')
        return;

    Postorder(node[now - 'A'].first);
    Postorder(node[now - 'A'].second);
    cout << now;

}

int main() 
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {

        char parent, left, right;
        cin >> parent >> left >> right;

        node[parent - 'A'].first = left;
        node[parent - 'A'].second = right;

    }

    Preorder('A');
    cout << "\n";
    Inorder('A');
    cout << "\n";
    Postorder('A');

}