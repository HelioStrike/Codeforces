#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 500010
using namespace std;

int n,m,x,y;
vector<int> ans,c[N],g[N];
int vis[N];
bool pos;

int main()
{
    cin>>n>>m; pos=1;
    FOR(i,0,m)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    FOR(i,1,n+1)
    {
        cin>>x;
        c[x].push_back(i);
    }
    FOR(i,1,n+1)
    {
        for(int u: c[i])
        {
            vis[u]=i;
            int cur=0,curm=0;;
            map<int,int> m;
            for(int v: g[u]) 
            {
                if(vis[v] && !m[vis[v]]) 
                {
                    m[vis[v]]=1;
                    cur++;
                    curm=max(curm,vis[v]);
                }
            }
            if(curm!=i-1 || cur!=i-1)
            {
                pos=0;
                break;
            }
            ans.push_back(u);
        }
        if(!pos) break;
    }
    if(!pos) cout<<-1<<'\n';
    else 
    {
        for(int x: ans) cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}