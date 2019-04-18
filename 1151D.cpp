#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define fi first
#define se second
#define ll long long
#define MAXN 100010
using namespace std;

int n; ll ans;
pii p[MAXN];

bool cmp(pii p1,pii p2)
{
    return ((p1.fi-p1.se)>(p2.fi-p2.se));
}

int main()
{
    cin>>n; FOR(i,0,n) cin>>p[i].fi>>p[i].se;
    sort(p,p+n,cmp);
    FOR(i,0,n) ans+=(ll)p[i].se*n-(ll)p[i].fi+(ll)(i+1)*(p[i].fi-p[i].se);
    cout<<ans<<'\n';

    return 0;
}