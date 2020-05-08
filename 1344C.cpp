#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,m,x,y,ans,vis[N];
bool vs[N][2];
vector<int> g[N][2];
string anss;

void dfs1(int u)
{
    if(vis[u]==1)
    {
        cout<<-1<<'\n';
        exit(0);
    }
    if(vis[u]==2) return;
    vis[u]=1;
    for(int v: g[u][0]) dfs1(v);
    vis[u]=2;
    return;
}

void dfs2(int u,int p)
{
    if(vs[u][p]) return;
    vs[u][p]=1;
    for(int v: g[u][p]) dfs2(v,p);
}

int main()
{
    cin>>n>>m;
    FOR(i,0,m)
    {
        cin>>x>>y;
        g[x][0].push_back(y);
        g[y][1].push_back(x);
    }
    FOR(i,1,n+1) if(!vis[i]) dfs1(i);
    FOR(i,1,n+1)
    {
        if(!vs[i][0] && !vs[i][1])
        {
            ans++;
            anss+='A';
        }
        else anss+='E';
        dfs2(i,0),dfs2(i,1);
    }
    cout<<ans<<'\n';
    cout<<anss<<'\n';
    return 0;
}