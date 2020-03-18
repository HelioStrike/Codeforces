#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,x,y,c[N],up[N],d[N];
vector<int> g[N];

void dfs(int u,int p) {
    d[u]=c[u];
    for(int v: g[u]) 
    {
        if(v!=p)
        {
            dfs(v,u);
            d[u]+=max(d[v],0);
        }
    }
}

void dfs1(int u,int p) {
    for(int v: g[u]) 
    {
        if(v!=p)
        {
            up[v]=max(0,up[u]+d[u]-max(d[v],0));
            dfs1(v,u);
        }
    }
}

int main()
{
    cin>>n; 
    FOR(i,1,n+1) 
    {
        cin>>c[i];
        if(!c[i]) c[i]=-1;
    }
    FOR(i,1,n) cin>>x>>y,g[x].push_back(y),g[y].push_back(x);
    dfs(1,-1);
    dfs1(1,-1);
    FOR(i,1,n+1) cout<<up[i]+d[i]<<' '; cout<<'\n';
    return 0;
}