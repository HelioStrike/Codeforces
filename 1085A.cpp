#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int main()
{
    string s; cin >> s;
    string ans=""; int n=s.length();

    int st=n%2;
    FOR(i,0,n/2)
    {
        ans=ans+s[n/2-i-1+st]+s[n/2+i+st];
    }
    ans+=st;
    cout<<ans<<'\n';

    return 0;
}