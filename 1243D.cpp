#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,m,x,y,ans;
map<pair<int,int>, int> es;
set<int> s;

void dfs(int u)
{
    vector<int> cur;
    for(int v: s)
    {
        if(es[{u,v}] || es[{v,u}]) continue;
        cur.push_back(v);
    }
    for(int v: cur) s.erase(v);
    for(int v: cur) dfs(v);
}

int main()
{
    cin>>n>>m;
    FOR(i,1,n+1) s.insert(i);
    FOR(i,0,m)
    {
        cin>>x>>y;
        es[{x,y}]=1;
    }
    FOR(i,1,n+1)
    {
        if(s.find(i)==s.end()) continue;
        s.erase(i); dfs(i); ans++;
    }
    cout<<ans-1<<'\n';

    return 0;
}
