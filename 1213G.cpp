#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define pll pair<ll,ll>
#define ll long long
#define N 200010
using namespace std;

ll n,m,q,u,v,w,a,b,c,p[N],sz[N],ans[N];
vector<pll> g[N];

ll f(ll x) { return x==p[x]?x:p[x]=f(p[x]); }

ll C(ll x) { return x*(x-1)/2; }

int main()
{
    cin>>n>>m;
    FOR(i,1,n+1) p[i]=i,sz[i]=1;
    FOR(i,1,n)
    {
        cin>>u>>v>>w;
        g[w].push_back({u,v});
    }
    c=0;
    FOR(i,1,N)
    {
        for(pll k: g[i])
        {
            a=f(k.first),b=f(k.second);
            if(a!=b)
            {
                c-=C(sz[a]),c-=C(sz[b]);
                sz[a]+=sz[b],p[b]=a;
                c+=C(sz[a]);
            }
        }
        ans[i]=c;
    }
    FOR(i,0,m)
    {
        cin>>q;
        cout<<ans[q]<<'\n';
    }

    return 0;
}

