#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 505
using namespace std;

int n,a[N],q[N],dp[N];

int main()
{
    cin>>n; FOR(i,1,n+1) cin>>a[i],dp[i]=i;
    FOR(i,1,n+1)
    {
        int cnt=0;
        FOR(j,i,n+1)
        {
            q[++cnt]=a[j];
            while(cnt!=0)
            {
                if(q[cnt]==q[cnt-1]) cnt--,q[cnt]++;
                else break;
            }
            dp[j]=min(dp[j],dp[i-1]+cnt);
        }
    }
    cout<<dp[n]<<'\n';

    return 0;
}