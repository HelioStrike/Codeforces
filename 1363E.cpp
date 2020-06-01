#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pll pair<ll,ll>
#define N 200010
using namespace std;

ll t,n,k,x,y,a[N],b[N],c[N],bc,cc,ans;
vector<ll> g[N];

pll dfs(ll u,ll p,ll msf)
{
    ll m0,m1;
    m0=m1=0;
    if(b[u]==0 && c[u]==1) m0=1;
    else if(b[u]==1 && c[u]==0) m1=1;
    msf=min(a[u],msf);
    for(ll v: g[u])
    {
        if(v==p) continue;
        pll p=dfs(v,u,msf);
        m0+=p.first;
        m1+=p.second;
    }
    ll cl=min(m0,m1);
    ans+=2*msf*cl;
    return {m0-cl,m1-cl};
}

int main()
{
    cin>>n;
    FOR(i,1,n+1) cin>>a[i]>>b[i]>>c[i],bc+=(b[i]==1),cc+=(c[i]==1);
    FOR(i,1,n)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if(bc!=cc)
    {
        cout<<-1<<'\n';
        exit(0);
    }
    dfs(1,-1,LONG_LONG_MAX);
    cout<<ans<<'\n';
    return 0;
}