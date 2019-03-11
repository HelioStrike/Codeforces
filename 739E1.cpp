#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 2010
using namespace std;

int n,a,b,o[N][N]; 
double l,m,h,dp[N][N],pa[N],pb[N],pab[N];

int solve()
{
    FOR(i,1,n+1)
    {
        FOR(j,0,a+1)
        {
            dp[i][j]=dp[i-1][j];
            o[i][j]=0;

            if(j && dp[i][j]<dp[i-1][j-1]+pa[i]) { dp[i][j]=dp[i-1][j-1]+pa[i]; o[i][j]=1; }
            if(dp[i][j]<dp[i-1][j]+pb[i]-m) { dp[i][j]=dp[i-1][j]+pb[i]-m; o[i][j]=2; }
            if(j && dp[i][j]<dp[i-1][j-1]+pab[i]-m) { dp[i][j]=dp[i-1][j-1]+pab[i]-m; o[i][j]=3; }
        }
    }

    int ret=0,ca=a;
    for(int i=n;i>=0;i--)
    {
        if(o[i][ca]>1) ret++;
        if(o[i][ca]&1) ca--;
    }
    return ret;
}

int main()
{
    cin>>n>>a>>b;
    FOR(i,1,n+1) cin>>pa[i];
    FOR(i,1,n+1) cin>>pb[i];
    FOR(i,1,n+1) pab[i]=pa[i]+pb[i]-pa[i]*pb[i];

    l=0,h=1;
    FOR(i,0,50)
    {
        m=(l+h)/2;
        if(solve()>b) l=m;
        else h=m;
    }

    solve();
    cout<<(dp[n][a]+l*b)<<'\n';

    return 0;
}