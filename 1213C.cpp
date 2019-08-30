#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,m,c,ans,a[10];

int main()
{
    FOR(i,1,10)
    {
        c=0;
        FOR(j,1,10) a[i]+=(i*j)%10;
    }
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ans=(n/(m*10))*a[m%10];
        for(ll i=(n/(m*10))*(m*10)+m;i<=n;i+=m) ans+=i%10;
        cout<<ans<<'\n';
    }

    return 0;
}

