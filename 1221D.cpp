#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define INF 1e18
#define N 300010
using namespace std;

ll t,n,h[N],r[N],dp[N][3];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,1,n+1) cin>>h[i]>>r[i];
        FOR(i,1,n+1)
        {
            FOR(j,0,3)
            {
                dp[i][j]=INF;
                FOR(k,0,3)
                {
                    if(h[i]+j!=h[i-1]+k) dp[i][j]=min(dp[i][j],dp[i-1][k]+j*r[i]);
                }
            }
        }
        cout<<min(dp[n][0],min(dp[n][1],dp[n][2]))<<'\n';
    }

    return 0;
}
