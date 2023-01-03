//https://cses.fi/problemset/task/1069

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s; cin >> s;
    int m = 1, c = 1;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i-1] == s[i])
        {
            c++;
            m = max(m, c);
        }
        else c = 1;
    }
    cout << m;
}