//https://cses.fi/problemset/task/1083

#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n-1; i++)
    {
        int a; cin >> a;
        sum1 += a;
        sum2 += i + 1;
    }
    sum2 += n;
    cout << sum2 - sum1;
}