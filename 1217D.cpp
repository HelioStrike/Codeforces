#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 5010
using namespace std;

struct Edge {int v,idx;}; 
int n,m,a,b,c,ans[N],vis[N];
vector<Edge> g[N];
    
void dfs(int u)
{
    vis[u]=1;
    for(Edge e: g[u])
    {
        if(ans[e.idx]) continue;
        if(vis[e.v]) c=2,ans[e.idx]=2;
        else ans[e.idx]=1,dfs(e.v);
    }
    vis[u]=0;
}

int main()
{
    cin>>n>>m;
    FOR(i,0,m) cin>>a>>b,g[a].push_back({b,i});
    FOR(i,1,n+1) if(!vis[i]) dfs(i);
    cout<<max(c,1)<<'\n';
    FOR(i,0,m) cout<<ans[i]<<' ';
    cout<<'\n';

    return 0;
}