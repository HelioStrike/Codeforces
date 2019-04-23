#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll n,k,x,ans,dp[3];

int main()
{
    cin>>n>>x;
    FOR(i,0,n)
    {
        cin>>k;
        dp[0]=max(0ll,dp[0]+k);
        dp[1]=max(dp[0],dp[1]+x*k);
        dp[2]=max(dp[1],dp[2]+k);
        ans=max(ans,dp[2]);
    }
    cout<<ans<<'\n';

    return 0;
}