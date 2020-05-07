#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==2 && m==2) cout<<"YES"<<'\n';
        else if(n==1 || m==1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}