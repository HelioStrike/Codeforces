#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,e,x,y,b[N],ed[N][2];
vector<int> v(N),g[N];

void dfs(int u,int o)
{
    b[u]=o;
    for(int t: g[u]) if(!v[t]) v[t]=1,dfs(t,o^1);
}

int main()
{
    cin>>n>>e;
    FOR(i,0,e) cin>>ed[i][0]>>ed[i][1],g[ed[i][0]].push_back(ed[i][1]),g[ed[i][1]].push_back(ed[i][0]);
    dfs(1,1);
    FOR(i,1,n+1)
    {
        for(int j: g[i])
        {
            if(b[i]==b[j])
            {
                cout<<"NO"<<'\n';
                return 0;
            }
        }
    }
    cout<<"YES"<<'\n';
    FOR(i,0,e) cout<<b[ed[i][0]];
    cout<<'\n';

    return 0;
}

