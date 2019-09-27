#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define M 1000000007
#define N 100010
using namespace std;

ll n,x,y,ans,w[N];
vector<ll> g[N];
map<ll,ll> m[N];

void dfs(ll u,ll p)
{
    for(auto pa: m[p]) m[u][__gcd(w[u],pa.first)]+=pa.second;
    m[u][w[u]]++;
    for(ll v: g[u]) if(v!=p) dfs(v,u);
    for(auto pa: m[u]) ans=(ans+pa.first*pa.second)%M;
}

int main()
{
    cin>>n; FOR(i,1,n+1) cin>>w[i];
    FOR(i,1,n) cin>>x>>y,g[x].push_back(y),g[y].push_back(x);
    dfs(1,0);
    cout<<ans<<'\n';

    return 0;
}
