#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define ll long long
#define N 200010
using namespace std;

int n,k,x,y;
bool ind[N];
ll ans;
vector<pii> ps;
vector<int> g[N];

int dfs(int u,int p,int d)
{
    int ret=1;
    for(int v: g[u]) if(v!=p) ret+=dfs(v,u,d+1);
    ps.push_back({d-ret,u});
    return ret;
}

void dfs2(int u,int p,int d,int ins)
{
    for(int v: g[u]) if(v!=p) dfs2(v,u,d+1,ins+ind[u]);
    if(ind[u]) ans+=d-ins;
}

int main()
{
    cin>>n>>k;
    FOR(i,1,n)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0,0); sort(ps.begin(),ps.end());
    for(int i=ps.size()-1;i>ps.size()-1-k;i--) ind[ps[i].second]=1;
    dfs2(1,0,0,0);
    cout<<ans<<'\n';
    return 0;
}