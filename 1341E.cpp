#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 10010
#define M 1010
using namespace std;

ll n,m,a,b,cur,ans,p[N];
vector<ll> nx,ncur;
bool vis[N][M];

void dfs(ll u,ll t)
{
    if(t>a || vis[u][t]) return;
    vis[u][t]=1;
    if(t==a) nx.push_back(u);
    if(u==m-1) ans=min(ans,t+cur*(a+b));
    else dfs(u+1,t+p[u+1]-p[u]);
    if(u>0) dfs(u-1,t+p[u]-p[u-1]);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    cin>>n>>m; FOR(i,0,m) cin>>p[i];
    cin>>a>>b; sort(p,p+m); ans=LONG_LONG_MAX;
    nx.push_back(0);
    for(cur=0;cur<=n;cur++)
    {
        ncur=nx; nx.clear();
        for(ll i: ncur) dfs(i,0);
    }
    cout<<(ans==LONG_LONG_MAX?-1:ans)<<'\n';
    return 0;
}