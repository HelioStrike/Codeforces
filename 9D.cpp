#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 40
using namespace std;

ll n,h,dp[N][N];

int main()
{
    cin>>n>>h;
    FOR(i,1,n+1)
    {
        dp[0][i-1]=1;
        FOR(j,1,n+1)
        {
            FOR(k,0,j)
            {
                dp[j][i]+=dp[j-k-1][i-1]*dp[k][i-1];
            }
        }
    }
    cout<<dp[n][n]-dp[n][h-1]<<'\n';

    return 0;
}
