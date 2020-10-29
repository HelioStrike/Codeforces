#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 410
using namespace std;

int t,n,a[N],dp[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,n) cin>>a[i];
        sort(a,a+n);
        memset(dp,16,sizeof(dp));
        dp[0]=0;
        FOR(i,1,2*n+1) for(int j=n;j>0;j--) dp[j]=min(dp[j],dp[j-1]+abs(i-a[j-1]));
        cout<<dp[n]<<'\n';
    }
    return 0;
}