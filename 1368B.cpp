#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll n,cur,a[10];
string s="codeforces";

int main()
{
    cin>>n; cur=1; FOR(i,0,10) a[i]++;
    while(cur<n)
    {
        for(ll i=0;i<10 && cur<n;i++)
        {
            cur/=a[i];
            a[i]++;
            cur*=a[i];
        }
    }
    FOR(i,0,10)
    {
        FOR(j,0,a[i]) cout<<s[i];
    }
    cout<<'\n';
    return 0;
}