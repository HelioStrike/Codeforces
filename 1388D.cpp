#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll n,ans,a[N],b[N],vis[N],visb[N],added[N];
vector<ll> g[N];
vector<ll> gf[N];
vector<ll> ansv,negv;

void dfs(ll u) {
    vis[u]=1;
    for(ll v: g[u])
    {
        if(!vis[v]) dfs(v);
        if(a[v]>0) a[u]+=a[v];
    }
    if(a[u]>0)
    {
        ansv.push_back(u);
        ans+=a[u];
    }
}

void dfsn(ll u) {
    visb[u]=1;
    for(ll v: gf[u]) {
        if(a[v]<=0 && !visb[v]) dfsn(v);
    }
    negv.push_back(u);
}

int main()
{
    cin>>n; ansv.clear(),negv.clear();
    FOR(i,1,n+1) cin>>a[i],vis[i]=0,visb[i]=0,added[i]=0,g[i].clear();
    FOR(i,1,n+1) 
    {
        cin>>b[i];
        if(b[i]!=-1) 
        {
            gf[i].push_back(b[i]);
            g[b[i]].push_back(i);
        }
    }
    FOR(i,1,n+1) if(!vis[i]) dfs(i);
    FOR(i,1,n+1) if(a[i]<=0 && !visb[i]) dfsn(i);
    reverse(negv.begin(),negv.end());
    for(ll k: negv)
    {
        ans+=a[k];
        ansv.push_back(k);
    }
    cout<<ans<<'\n';
    for(ll u: ansv) cout<<u<<' ';
    cout<<'\n';
    return 0;
}