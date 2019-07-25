#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
#define M 1000010
using namespace std;

int V,E,u,v,w,cur,p[N],flg[N],ans[N],tin[N],tmin[N];
vector<pair<int,int> > g[N];
vector<tuple<int,int,int> > e[M];

int f(int x) { return x==p[x]?x:p[x]=f(p[x]); }

void dfs(int v,int pid=-1)
{
    flg[v]=1; tin[v]=tmin[v]=++cur;
    for(const auto&[u,id]: g[v])
    {
        if(id!=pid)
        {
            if(!flg[u])
            {
                dfs(u,id);
                tmin[v]=min(tmin[v],tmin[u]);
                ans[id]=1+(tmin[u]>tin[v]);
            }
            else tmin[v]=min(tmin[v],tmin[u]);
        }
    }
}

int main()
{
    cin>>V>>E;
    FOR(i,1,V+1)p[i]=i;
    FOR(i,1,E+1)
    {
        cin>>u>>v>>w;
        e[w].push_back(make_tuple(u,v,i));
    }
    FOR(i,1,M+1)
    {
		for(const auto&[u,v,id] : e[i])
        {
            if(f(u)!=f(v))
            {
                g[f(u)].push_back(make_pair(f(v),id));
                g[f(v)].push_back(make_pair(f(u),id));
                flg[f(u)]=flg[f(v)]=0;
                ans[id]=1;
            }
        }
        cur=0;
        for(const auto&[u,v,id] : e[i])
        {
            if(!flg[f(u)]) dfs(f(u));
            g[f(u)].clear(),g[f(v)].clear();
            p[f(u)]=p[v];
        }
    }

    FOR(i,1,E+1)
    {
        if(ans[i] == 0) cout<<"none";
		else if(ans[i] == 1) cout<<"at least one";
		else if(ans[i] == 2) cout<<"any";
        cout<<'\n';
    }

    return 0;
}
