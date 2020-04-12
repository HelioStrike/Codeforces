#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,maxm,maxmm,ans,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; maxm=LONG_MIN,maxmm=LONG_MIN; ans=0;
        FOR(i,0,n) cin>>a[i];
        FOR(i,0,n)
        {
            maxm=max(maxm,a[i]);
            maxmm=max(maxmm,maxm-a[i]);
        }
        while(maxmm) ans++,maxmm>>=1;
        cout<<ans<<'\n';
    }
    return 0;
}