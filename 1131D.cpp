#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pb push_back
#define N 100010
using namespace std;

int n,m,d[N];
vector<int> edge[2*N],w[2*N];
bool vis[N];
string s;

void dfs(int x)
{
    vis[x]=1;
    for(int i=0;i<edge[x].size();i++)
    {
        int v=edge[x][i],c=w[x][i];
        if(d[v]<d[x]+c)
        {
            d[v]=d[x]+c;
            if(vis[v]) { cout<<"NO"<<'\n'; exit(0); }
            dfs(v);
        }
    }
    vis[x]=0;
}

int main()
{
    cin>>n>>m;
    FOR(i,0,n)
    {
        cin>>s;
        FOR(j,0,m)
        {
            if(s[j]=='=') edge[i].pb(j+n),edge[j+n].pb(i),w[i].pb(0),w[j+n].pb(0);
            else if(s[j]=='<') edge[i].pb(j+n),w[i].pb(1);
            else edge[j+n].pb(i),w[j+n].pb(1);
        }
    }

    FOR(i,0,n+m) dfs(i);
    cout<<"YES"<<'\n';
    FOR(i,0,n) cout<<d[i]+1<<' ';
    cout<<'\n';
    FOR(i,0,m) cout<<d[i+n]+1<<' ';
    cout<<'\n';

    return 0;
}