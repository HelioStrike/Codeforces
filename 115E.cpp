#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define lt (v<<1)
#define rt ((v<<1)|1)
#define ll long long
#define N 200010
using namespace std;

struct race {ll u,v,w;};
ll n,q,x,cur,p[N],d[N],t[4*N],lz[4*N];
race r[N];

void push(ll v)
{
    if(lz[v])
    {
        t[lt]+=lz[v],lz[lt]+=lz[v];
        t[rt]+=lz[v],lz[rt]+=lz[v];
        lz[v]=0;
    }
}

void update(ll x,ll y,ll l,ll r,ll w,ll v)
{
    if(x<=l && y>=r)
    {
        t[v]+=w;
        lz[v]+=w;
        return;
    }
    push(v);
    if(l==r) return;
    ll m=(l+r)/2;
    if(m>=x) update(x,y,l,m,w,lt);
    if(m<y) update(x,y,m+1,r,w,rt);
    t[v]=max(t[lt],t[rt]);
}

ll query(ll x,ll y,ll l,ll r,ll v)
{
    if(x<=l && y>=r) return t[v];
    push(v);
    ll m=(l+r)/2;
    if(m>=y) return query(x,y,l,m, lt);
    else if(m<x) return query(x,y,m+1,r,rt);
    return max(query(x,y,l,m,lt),query(x,y,m+1,r,rt));
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>n>>q; FOR(i,1,n+1) cin>>x,p[i]=p[i-1]+x;
    FOR(i,1,q+1) cin>>r[i].u>>r[i].v>>r[i].w;
    sort(r+1,r+q+1,[&](race a,race b) { return a.v<b.v; });
    cur=1;
    FOR(i,1,n+1)
    {
        while(cur<=q && r[cur].v==i)
        {
            update(0,r[cur].u-1,0,n,r[cur].w,1);
            cur++;
        }
        d[i]=max(d[i-1],query(0,i-1,0,n,1)-p[i]);
        update(i,i,0,n,d[i]+p[i],1);
    }
    cout<<d[n]<<'\n';
    return 0;
}