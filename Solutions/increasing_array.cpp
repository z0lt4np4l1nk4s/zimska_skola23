//https://cses.fi/problemset/task/1094

#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<int> V;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        V.push_back(a);
    }
    ll x = 0;
    for(int i = 1; i < n; i++)
    {
        if(V[i-1] > V[i]) 
        {
            x += V[i-1] - V[i];
            V[i] += V[i-1] - V[i];
        }
    }
    cout << x;
}