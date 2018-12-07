#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    int n,m=0,g=0,c=0,ans;
    string s;

    cin >> n; cin >> s;
    FOR(i,0,n)
    {
        if(s[i] == 'G') g++,c++;
        else 
        {
            m = c;
            c = 0;
        }
        ans = max(ans,m+c+1);
    }

    cout << min(ans,g) << '\n';

    return 0;
}