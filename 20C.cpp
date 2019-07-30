#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pli pair<ll,int>
#define INF 1e14
#define N 200010
#define M 100010
using namespace std;

int n,V,E,x,y,w;
vector<int> p(N,-1);
vector<ll> d(N,INF);
vector<bool> vis(N);
vector<vector<pli > > g(N);
set<pli > s;

void ppath(int x)
{
    if(x==-1)  return;
    ppath(p[x]);
    cout<<x<<' ';
}

int main()
{
    cin>>V>>E; d[1]=0;
    FOR(i,0,E) cin>>x>>y>>w,g[x].push_back({y,w}),g[y].push_back({x,w});
    s.insert({0,1});
    while(!s.empty())
    {
        x=s.begin()->second;
        s.erase(s.begin());
        if(d[x]==INF) break;

        for(pli e: g[x])
        {
            y=e.first;
            w=e.second;
            if(d[x]+w<d[y])
            {
                s.erase({d[y],y});
                d[y]=d[x]+w;
                p[y]=x;
                s.insert({d[y],y});
            }
        }
    }
    if(d[V]!=INF) ppath(V);
    else cout<<-1; 
    cout<<'\n';

    return 0;
}
