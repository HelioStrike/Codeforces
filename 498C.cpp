#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 3010
using namespace std;

int n,m,x,y,cnt,ans,vis[N],match[N];
vector<int> g[N];
vector<pair<int,int> > a[N];

bool dfs(int u)
{
    for(int v: g[u])
    {
        if(vis[v]) continue;
        vis[v]=1;
        if(!match[v]||dfs(match[v]))
        {
            match[v]=u;
            return 1;
        }
    }
    return 0;
}

int main()
{
    cin>>n>>m;
    FOR(i,1,n+1)
    {
        cin>>x;
        for(int j=2;1ll*j*j<=x;j++) while(x%j==0) a[i].push_back({j,++cnt}),x/=j;
        if(x!=1) a[i].push_back({x,++cnt});
    }
    FOR(i,1,m+1)
    {
        cin>>x>>y; if(y&1) swap(x,y);
        for(auto p1: a[x])
        {
            for(auto p2: a[y])
            {
                if(p1.first==p2.first) g[p1.second].push_back(p2.second);
            }
        }
    }
	for(int i=1;i<=cnt;i++){
		memset(vis,0,sizeof(vis));
		if(dfs(i)) ans++;
	}
	printf("%d\n",ans);
    return 0;
}