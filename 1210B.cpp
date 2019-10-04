#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 7000
using namespace std;

ll n,ans,a[N],b[N],vis[N];
map<ll,ll> m;

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>a[i],m[a[i]]++;
    FOR(i,0,n) cin>>b[i];
    FOR(i,0,n)
    {
        if(m[a[i]]<2) continue;
        FOR(j,0,n) if(((a[i]|a[j])==a[i]) && !vis[j]) ans+=b[j],vis[j]=1;
    }
    cout<<ans<<'\n';

    return 0;
}
