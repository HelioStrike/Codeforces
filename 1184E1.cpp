#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
#define M 1000010
using namespace std;

int n,m,c1,c2,p[N];
struct edge{int u,v,w;} e[M];

bool cmp(edge a,edge b) { return a.w<b.w; }

int f(int x) { return x==p[x]?x:p[x]=f(p[x]); }

int main()
{
    cin>>n>>m; FOR(i,0,m) cin>>e[i].u>>e[i].v>>e[i].w;
    FOR(i,1,n+1) p[i]=i;
    sort(e+1,e+m,cmp);
    FOR(i,1,m)
    {
        if(f(e[i].u)!=f(e[i].v))
        {
            p[f(e[i].u)]=f(e[i].v);
            if(f(e[0].u)==f(e[0].v)) { cout<<e[i].w<<'\n'; return 0; }
        }
    }
    cout<<1000000000<<'\n';

    return 0;
}
