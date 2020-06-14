#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

int n,m,k,x,y,fs,don,dep[N],vis[N],colo[N];
vector<int> g[N];
vector<int> cycle;

int dfs(int u,int d)
{
    if(vis[u]) return 0;
    cycle.push_back(u);

    bool cancol=1;
    for(int v: g[u])
    {
        if(colo[v]) cancol=0;
        if(vis[v]==1 && d-dep[v]+1<=k && d-dep[v]+1>2)
        {
            fs=v; 
            return 1; 
        }
    }
    if(cancol) 
    {
        colo[u]=1;
        don++;
        if(don==(k+1)/2) return 2;
    }

    vis[u]=1; dep[u]=d;
    for(int v: g[u]) 
    {
        int ok=dfs(v,d+1);
        if(ok) return ok;
    }
    cycle.pop_back();
    vis[u]=2; 
    return 0;
}

int main()
{
    cin>>n>>m>>k;
    FOR(i,0,m)
    {
        cin>>x>>y;
        g[x].push_back(y); 
        g[y].push_back(x); 
    }
    int lel=dfs(1,0);
    if(lel==1)
    {
        cout<<2<<'\n';
        int idx=0; bool prntnums=0;
        for(int x: cycle) 
        {
            if(x==fs && !prntnums) { cout<<cycle.size()-idx<<'\n'; prntnums=1; }
            if(prntnums) cout<<x<<' ';
            idx++;
        }
        cout<<'\n';
    }
    else
    {
        cout<<1<<'\n';
        FOR(i,1,n+1) if(colo[i]) cout<<i<<' ';
        cout<<'\n';
    }
    return 0;
}