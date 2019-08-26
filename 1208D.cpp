#include <bits/stdc++.h>
#define ll long long
#define N 200010
using namespace std;

ll n,l,m,h,a[N],p[N],s[N];

ll get(ll idx)
{
    ll ret=0;
    for(;idx;idx-=idx&-idx) ret+=s[idx];
    return ret;
}

void add(ll idx,ll val)
{
    for(;idx<n;idx+=idx&-idx) s[idx]+=val;
}

int main()
{
    cin>>n; 
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=n;i>=1;i--)
    {
        l=0,h=n+1;
        while(h-l>1)
        {
            m=(l+h)/2;
            if(1ll*m*(m+1)/2-get(m)<=a[i]) l=m;
            else h=m;
        }
        p[i]=h;
        add(h,h);
    }
    for(ll i=1;i<=n;i++) cout<<p[i]<<' ';
    cout<<'\n';

    return 0;
}