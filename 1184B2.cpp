#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 110
#define S 2010
using namespace std;

int n,m,x,y,s,b,d[N][N],u[S],v[S],w[S],p[S],q[S],match[S];
ll k,h,ans;
bool vis[S];
vector<int> g[S];

bool dfs(int u)
{
    if(vis[u]) return 0;
    vis[u]=1;
    for(int v: g[u])
    {
        if(!match[v] || dfs(match[u]))
        {
            match[v]=u;
            return 1;
        }
    }
    return 0;
}

int main()
{
    cin>>n>>m;
    memset(d,63,sizeof(d));
    FOR(i,1,n+1) d[i][i]=0;
    FOR(i,0,m)
    {
        cin>>x>>y;
        d[x][y]=d[y][x]=1;
    }
    FOR(k,1,n+1) FOR(i,1,n+1) FOR(j,1,n+1) d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
    cin>>s>>b>>k>>h;
    FOR(i,1,s+1) cin>>u[i]>>v[i]>>w[i];
    FOR(i,1,b+1) cin>>p[i]>>q[i];
    m=0;
    FOR(i,1,s+1) FOR(j,1,b+1) if(d[u[i]][p[j]]<=w[i] && v[i]>=q[j]) {
        g[i].push_back(j+s);
        g[j+s].push_back(i);
    }
    FOR(i,1,s+1)
    {
        memset(vis,0,sizeof(vis));
        if(dfs(i)) ans++;
    }
    cout<<min(ans*k,s*h)<<'\n';
    return 0;
}