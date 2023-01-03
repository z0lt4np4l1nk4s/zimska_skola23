//https://cses.fi/problemset/task/1619/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int, int>> V;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        V.push_back({a, 1});
        V.push_back({b, -1});
    }
    sort(V.begin(), V.end());
    int c = 0, m = 0;
    for(int i = 0; i < 2*n; i++)
    {
        c += V[i].second;
        m = max(m, c);
    }
    cout << m;
}