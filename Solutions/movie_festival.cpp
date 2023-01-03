//https://cses.fi/problemset/task/1629

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
        V.push_back({b, a});
    }
    int last = -1;
    int c = 0;
    sort(V.begin(), V.end());
    for(int i = 0; i < n; i++)
    {
        if(last == -1 || V[i].second >= last)
        {
            last = V[i].first;
            c++;
        }
    }
    cout << c;
}