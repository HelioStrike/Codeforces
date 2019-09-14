#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,m,x,y,ans,vis[N];
vector<int> g[N];
string s;

void dfs(int u)
{
    for(int v: g[u])
    {
        if(vis[v]) continue;
        vis[v]=1; ans++;
        dfs(v);
    }
}

int main()
{
    cin>>n>>m;
    FOR(i,0,m)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    FOR(i,1,n+1)
    {
        if(!vis[i]) 
        {
            vis[i]=1;
            dfs(i);
        }
    }
    cout<<m-ans<<'\n';

    return 0;
}