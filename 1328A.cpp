#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,a,b,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n=(a/b)*b;
        if(n==a) cout<<0<<'\n';
        else cout<<n+b-a<<'\n';
    }
    return 0;
}