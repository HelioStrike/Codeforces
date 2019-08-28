#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
#define M 1000010
using namespace std;

int n,m,c,l,a,b,p[N];
vector<pair<int,int> > ans;
set<int> s[N];
struct edge{int u,v,w,i;} e[M];

bool cmp(edge a,edge b) { return a.w<b.w; }

int f(int x) { return x==p[x]?x:p[x]=f(p[x]); }

int main()
{
    cin>>n>>m; FOR(i,0,m) cin>>e[i].u>>e[i].v>>e[i].w,e[i].i=i,s[e[i].u].insert(i),s[e[i].v].insert(i);
    FOR(i,1,n+1) p[i]=i;
    sort(e,e+m,cmp);
    c=0,l=n-1;
    while(l)
    {
        a=f(e[c].u),b=f(e[c].v);
        if(a!=b)
        {
            if(s[a].size()>s[b].size()) swap(a,b);
            for(int i: s[a])
            {
                if(s[b].count(i))
                {
                    if(i!=e[c].i) ans.push_back({i,e[c].w});
                    s[b].erase(i);
                }
                else s[b].insert(i);
            }
            s[a].clear();
            p[a]=b;
            l--;
        }
        c++;
    }
    sort(ans.begin(),ans.end());
    for(auto p: ans) cout<<p.second<<'\n';

    return 0;
}
