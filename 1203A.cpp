#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 210
using namespace std;

int t,n,x,p,forw,pre,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; forw=pre=1;
        FOR(i,0,n) cin>>a[i],a[i]--;
        FOR(i,0,n-1) if((a[i]+1)%n!=a[i+1]) { forw=0; break; }
        FOR(i,0,n-1) if((a[i]-1+n)%n!=a[i+1]) { pre=0; break; }
        if(forw || pre) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }

    return 0;
}
