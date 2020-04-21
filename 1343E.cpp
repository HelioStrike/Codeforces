#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 400010
using namespace std;

ll t,n,m,a,b,c,x,y,ans,cur,p[N],vis[N],dist[3][N];
vector<ll> g[N];

void bfs(ll u)
{
    dist[cur][u]=0;
    queue<ll> q; q.push(u);
    vis[u]=cur+1;
    while(!q.empty())
    {
        ll v=q.front(); q.pop();
        for(ll w: g[v])
        {
            if(vis[w]==cur+1) continue;
            dist[cur][w]=dist[cur][v]+1;
            vis[w]=cur+1;
            q.push(w);
        }
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>a>>b>>c; cur=0; ans=LONG_LONG_MAX;
        FOR(i,1,m+1) cin>>p[i];
        sort(p+1,p+m+1);
        FOR(i,1,m+1) p[i]+=p[i-1];
        memset(vis,0,(n+1)*sizeof(ll));
        memset(dist[0],0,(n+1)*sizeof(ll));
        memset(dist[1],0,(n+1)*sizeof(ll));
        memset(dist[2],0,(n+1)*sizeof(ll));
        FOR(i,1,n+1) g[i].clear();
        FOR(i,0,m)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        bfs(a); cur++;
        bfs(b); cur++;
        bfs(c);
        FOR(i,1,n+1)
        {
            ll dist2a=dist[0][i];
            ll dist2b=dist[1][i];
            ll dist2c=dist[2][i];
            if(dist2a+dist2b+dist2c<=m) ans=min(ans,p[dist2a+dist2b+dist2c]+p[dist2b]);
        }
        cout<<ans<<'\n';
    }

    return 0;
}