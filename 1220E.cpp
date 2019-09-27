#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll n,m,x,y,s,best,cantake,w[N],dp[N];
bool vis[N];
vector<ll> g[N];

ll dfs(ll u,ll p)
{
    vis[u]=1; ll cur=w[u];
    bool chek=1;
    for(ll v: g[u])
    {
        if(vis[v] && v!=p) chek=0;
        else if(!vis[v])
        {
            chek&=dfs(v,u);
            cur=max(cur,w[u]+dp[v]);
        }
    }
    dp[u]=cur;
    if(chek) best=max(best,dp[u]);
    else cantake+=w[u];
    return chek;
}

int main()
{
    cin>>n>>m; FOR(i,1,n+1) cin>>w[i];
    FOR(i,0,m)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cin>>s;
    dfs(s,s);
    cout<<best+cantake<<'\n';

    return 0;
}
