//https://cses.fi/problemset/task/1660/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main()
{
    int n, x; cin >> n >> x;
    vector<int> V;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        V.push_back(a);
    } 
    int l = 0, r = 0, c = 0;
    ll sum = V[0];
    while(r < n)
    {
        if(sum == x)
        {
            sum -= V[l];
            c++;
            l++;
        }
        else if(sum > x) 
        {
            sum -= V[l];
            l++;
        }
        else 
        {
            r++;
            if(r == n) break;
            sum += V[r];
        }
    }
    cout << c;
}