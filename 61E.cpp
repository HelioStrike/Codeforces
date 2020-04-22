#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 1000010
using namespace std;

ll n,ans,pos,cur,a[N],b[N],ft[N];

ll get(ll idx)
{
    ll ret=0;
    for(;idx;idx-=idx&-idx) ret+=ft[idx];
    return ret;
}

void add(ll idx)
{
    for(;idx<=n;idx+=idx&-idx) ft[idx]++;
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n; FOR(i,0,n) cin>>a[i],b[i]=a[i];
    sort(b,b+n);
    FOR(i,0,n)
    {
        pos=lower_bound(b,b+n,a[i])-b+1;
        cur=get(pos);
        ans+=(i-cur)*(pos-1-cur);
        add(pos);
    }
    cout<<ans<<'\n';
    return 0;
}