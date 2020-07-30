#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll t,n,cr,ans,dp[10][10];
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s; memset(dp,0,sizeof(dp));
        n=s.length();
        FOR(i,0,n)
        {
            cr=s[i]-'0';
            dp[cr][cr]++;
            FOR(j,0,10)
            {
                if(cr==j) continue;
                if(dp[j][j]!=0) dp[j][cr]=max(dp[j][cr],2ll);
                dp[j][cr]=max(dp[j][cr],dp[cr][j]+1);
            }
        }
        ans=INT_MAX;
        FOR(i,0,10) FOR(j,0,10) {
            if(i==j) ans=min(ans,n-dp[i][j]);
            else ans=min(ans,n-2*(dp[i][j]/2));
        }
        cout<<ans<<'\n';
    }

    return 0;
}