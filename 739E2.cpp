#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define N 2010
using namespace std;

int n,a,b,o[N]; 
double l1,m1,h1,l2,m2,h2,dp[N],pa[N],pb[N],pab[N];

pii solve()
{
    FOR(i,1,n+1)
    {
        dp[i]=dp[i-1];
        o[i]=0;

        if(dp[i]<dp[i-1]+pa[i]-m1) { dp[i]=dp[i-1]+pa[i]-m1; o[i]=1; }
        if(dp[i]<dp[i-1]+pb[i]-m2) { dp[i]=dp[i-1]+pb[i]-m2; o[i]=2; }
        if(dp[i]<dp[i-1]+pab[i]-m1-m2) { dp[i]=dp[i-1]+pab[i]-m1-m2; o[i]=3; }
    }

    pii ret=pii(0,0);
    FOR(i,1,n+1)
    {
        if(o[i]>1) ret.second++;
        if(o[i]&1) ret.first++;
    }
    return ret;
}

int main()
{
    cin>>n>>a>>b;
    FOR(i,1,n+1) cin>>pa[i];
    FOR(i,1,n+1) cin>>pb[i];
    FOR(i,1,n+1) pab[i]=pa[i]+pb[i]-pa[i]*pb[i];

    l1=0,h1=1;
    FOR(i,0,50)
    {
        m1=(l1+h1)/2;
        l2=0,h2=1;
        FOR(j,0,50)
        {
            m2=(l2+h2)/2;
            if(solve().second>b) l2=m2;
            else h2=m2;
        }
        if(solve().first>a) l1=m1;
        else h1=m1;
    }

    solve();
    cout<<(dp[n]+l1*a+l2*b)<<'\n';

    return 0;
}