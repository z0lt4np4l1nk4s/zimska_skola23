//https://cses.fi/problemset/task/1621

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> V;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        V.push_back(a);
    }
    sort(V.begin(), V.end());
    int c = 1;
    for(int i = 1; i < n; i++)
    {
        if(V[i-1] != V[i]) c++;
    }
    cout << c;
}