#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,q,x,y,u,v,w,t[2*N];
pair<int,int> a[N];

int get(int l,int r)
{
    l=l+n-1,r+=n;
    int ret=0;
    while(l<r)
    {
        if(l&1) ret=__gcd(ret,t[l++]);
        if(r&1) ret=__gcd(ret,t[--r]);
        l>>=1,r>>=1;
    }
    return ret;
}

int main()
{
    cin>>n; FOR(i,0,n) cin>>t[i+n],a[i]=make_pair(t[i+n],i+1);
    for(int i=n-1;i>0;i--) t[i]=__gcd(t[i<<1],t[i<<1|1]);
    cin>>q; sort(a,a+n);
    FOR(i,0,q)
    {
        cin>>x>>y;
        u=get(x,y);
        v=lower_bound(a,a+n,make_pair(u,x))-a;
        w=lower_bound(a,a+n,make_pair(u,y+1))-a;
        cout<<y-x-w+v+1<<'\n';
    }
    return 0;
}