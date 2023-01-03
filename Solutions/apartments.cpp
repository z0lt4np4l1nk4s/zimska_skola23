//https://cses.fi/problemset/task/1084

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> U, A;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        U.push_back(a);
    }
    for(int i = 0; i < m; i++)
    {
        int a; cin >> a;
        A.push_back(a);
    }
    sort(U.begin(), U.end());
    sort(A.begin(), A.end());
    int i = 0, j = 0, c = 0;
    while(i < n && j < m)
    {
        if(U[i] - k <= A[j] && U[i] + k >= A[j])
        {
            c++;
            i++;
            j++;
        }
        else if(U[i] - A[j] > k) j++;
        else i++;
    }
    cout << c;
}