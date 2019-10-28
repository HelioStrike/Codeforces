#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define pll pair<ll,ll>
#define INF 1000000007
#define N 200010
using namespace std;

ll t,n,s,l,r,m,ans;
pll a[N];

bool f(ll x)
{
    ll sum=0,cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i].second>=x && cnt<(n+1)/2) sum+=max(x,a[i].first),cnt++;
        else sum+=a[i].first;
    }
    return (cnt==(n+1)/2 && sum<=s);
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s; FOR(i,0,n) cin>>a[i].first>>a[i].second;
        sort(a,a+n);
        l=1; r=INF;
        while(l<=r)
        {
            m=(l+r)/2;
            if(f(m)) ans=m,l=m+1;
            else r=m-1;
        }
        cout<<ans<<'\n';
    }

    return 0;
}
