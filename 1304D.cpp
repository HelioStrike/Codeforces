#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
#define D 19
using namespace std;

int n,x,y,a,b,k,q,ds,ys,d[N],anc[N][D+1];
vector<int> g[N];

void dfs(int u,int p)
{
    d[u]=d[p]+1; anc[u][0]=p;
    for(int v: g[u]) if(v!=p) dfs(v,u);
}

int lca(int u,int v)
{
    if(d[u]<d[v]) swap(u,v);
    for(int i=D;i>=0;i--) if(d[anc[u][i]]>=d[v]) u=anc[u][i];
    if(u==v) return u;
    for(int i=D;i>=0;i--) if(d[anc[u][i]]!=d[anc[v][i]]) u=anc[u][i],v=anc[v][i];
    return anc[u][0];
}

int dist(int a,int b) { return d[a]+d[b]-2*d[lca(a,b)]; }

int main()
{
    cin>>n; FOR(i,1,n) cin>>x>>y,g[x].push_back(y),g[x].push_back(y);
    dfs(1,0); FOR(j,1,D+1) FOR(i,1,n+1) anc[i][j]=anc[anc[i][j-1]][j-1];
    cin>>q;
    FOR(i,0,q)
    {
        cin>>a>>b>>x>>y>>k; ys=0;
        ds=dist(x,y);
        if(ds<=k && ds%2==k%2) ys=1;
        ds=dist(x,a)+dist(y,b)+1;
        if(ds<=k && ds%2==k%2) ys=1;
        ds=dist(x,b)+dist(y,a)+1;
        if(ds<=k && ds%2==k%2) ys=1;
        cout<<(ys?"YES":"NO")<<'\n';
    }

    return 0;
}