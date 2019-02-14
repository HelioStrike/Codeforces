#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 5010
using namespace std;

int n,m,ans,a[MAXN],dp[MAXN][MAXN];

int main()
{
    cin >> m;
    while(m--)
    {
        n++; cin>>a[n]; if(a[n]==a[n-1]) n--;
    }

    FOR(l,1,n)
    {
        FOR(i,1,n+1-l)
        {
            int j=i+l;
            if(a[i]==a[j]) dp[i][j]=dp[i+1][j-1]+1;
            else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            ans=max(ans,dp[i][j]);
        }
    }

    cout << (n-1-ans) << '\n';

    return 0;
}