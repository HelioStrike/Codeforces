#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 2010
using namespace std;

double dp[N][N],p[N],u[N];

int main()
{
    int n,a,b; cin>>n>>a>>b;
    FOR(i,0,n) cin>>p[i];
    FOR(i,0,n) cin>>u[i];
    FOR(i,0,n)
    {
        for (int j=min(a,i);j>=max(0,a-n+i);j--)
        {
            for (int k=min(b,i);k>=max(0,b-n+i);k--)
            {
                dp[j+1][k]=max(dp[j+1][k],dp[j][k]+p[i]);
                dp[j][k+1]=max(dp[j][k+1],dp[j][k]+u[i]);
                dp[j+1][k+1]=max(dp[j+1][k+1],dp[j][k]+(1-(1-p[i])*(1-u[i])));
            }
        }
    }
    cout<<dp[a][b]<<'\n';

    return 0;
}