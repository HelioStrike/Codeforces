#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pll pair<ll,ll>
#define f first
#define s second
#define N 100010
using namespace std;

ll t,n,m,x,y,p[N],h[N];
vector<ll> g[N];

ll dfs(ll u,ll par)
{
    ll cur=0;
    for(ll v: g[u])
    {
        if(v==par) continue;
        ll ok=dfs(v,u);
        if(ok==LONG_LONG_MAX) return LONG_LONG_MAX;
        cur+=ok; p[u]+=p[v];
    }
    if((p[u]+h[u])%2!=0 || (p[u]+h[u])/2<cur || h[u]>p[u]) return LONG_LONG_MAX;
    return (p[u]+h[u])/2;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        FOR(i,1,n+1) cin>>p[i],g[i].clear();
        FOR(i,1,n+1) cin>>h[i];
        FOR(i,1,n)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        cout<<(dfs(1,0)!=LONG_LONG_MAX?"YES":"NO")<<'\n';
    }

    return 0;
}