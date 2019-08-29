#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pll pair<ll,ll>
#define fi first
#define se second
#define ll long long
#define M 1000000007
#define N 200010
using namespace std;

ll n,dp[N],cnt[N];
pll a[N];

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i].se>>a[i].fi;
    sort(a,a+n); dp[n]=LONG_MAX;
    for(int i=n-1;i>=0;i--)
    {
        int x=lower_bound(a+i,a+n,(pll){a[i].se,0})-a;
        if(x==n) dp[i]=a[i].fi,cnt[i]=1;
        else dp[i]=dp[x]-a[i].se+a[i].fi,cnt[i]=cnt[x];
        if(dp[i]>dp[i+1]) dp[i]=dp[i+1],cnt[i]=cnt[i+1];
        else if(dp[i]==dp[i+1]) cnt[i]=(cnt[i]+cnt[i+1])%M;
    }
    cout<<cnt[0]<<'\n';

    return 0;
}