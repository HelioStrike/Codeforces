#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 998244353
using namespace std;

ll n,q,u,v,x;
map<ll,ll> m;

ll solve(ll n)
{
    if(m[n]) return m[n];
    ll ret=0,c=n;
    for(ll d=2;d*d<=c;d++)
    {
        if(c%d==0) ret=(ret+solve(n/d))%M;
        while(c%d==0) c/=d;
    }
    if(c>1) ret=(ret+solve(n/c))%M;
    return m[n]=ret;
}

int main()
{
    cin>>n>>q; m[1]=1;
    solve(n);
    while(q--)
    {
        cin>>u>>v;
        x=__gcd(u,v);
        u=u/x,v=v/x;
        cout<<m[u]*m[v]%M<<'\n';
    }
}