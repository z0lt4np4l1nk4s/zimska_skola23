//https://cses.fi/problemset/task/1640

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    vector<pair<int, int>> V;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        V.push_back({a, i+1});
    }
    int l = 0;
    int r = n-1;
    bool found = false;
    sort(V.begin(), V.end());
    while(l != r)
    {
        if(V[l].first + V[r].first == x)
        {
            found = true;
            cout << V[l].second << " " << V[r].second;
            break;
        }
        else if(V[l].first + V[r].first > x) r--;
        else l++;
    }
    if(!found) cout << "IMPOSSIBLE";
}