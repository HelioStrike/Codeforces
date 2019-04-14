#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 300010
using namespace std;

int n,cnt,ms[MAXN],vs[MAXN];
vector<int> g[MAXN];

void dfs(int u)
{
    if(ms[u]) vs[u]=1e9;
    if(!g[u].size()) cnt++,vs[u]=1;
    for(int v: g[u])
    {
        dfs(v);
        if(ms[u]) vs[u]=min(vs[u],vs[v]);
        else vs[u]+=vs[v];
    }
}

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>ms[i];
    FOR(i,1,n) cin>>cnt,g[cnt-1].push_back(i);
    cnt=0; dfs(0);
    cout<<cnt-vs[0]+1<<'\n';
}