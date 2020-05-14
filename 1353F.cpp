#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 105
using namespace std;

ll t,n,m,ans,a[N][N],dp[N][N];

ll solve(ll st) {
    for(int i=n-1;i>=0;i--) for(int j=m-1;j>=0;j--) {
        dp[i][j]=(ll)2e18;
        ll ok=a[i][j]-st-i-j;
        if(ok<0) continue;
        if(i==n-1 && j==m-1) dp[i][j]=ok;
        if(i<n-1) dp[i][j]=min(dp[i][j],dp[i+1][j]+ok);
        if(j<m-1) dp[i][j]=min(dp[i][j],dp[i][j+1]+ok);
    }
    return dp[0][0];
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; ans=2e18;
        FOR(i,0,n) FOR(j,0,m) cin>>a[i][j];
        FOR(i,0,n) FOR(j,0,m) ans=min(ans,solve(a[i][j]-i-j));
        cout<<ans<<'\n';
    }
    return 0;
}