#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 3010
#define M 998244353
using namespace std;

ll n,m,ans,dp[N][N];
string s,t;

int main()
{
    cin>>s>>t;
    n=s.length(),m=t.length();
    FOR(i,0,n) if(i>=m || s[0]==t[i]) dp[i][i]=2;
    FOR(i,1,n)
    {
        FOR(j,0,n-i)
        {
            dp[j][i+j]=(dp[j+1][j+i]*(j>=m || s[i]==t[j])+dp[j][j+i-1]*(j+i>=m || s[i]==t[i+j]))%M;
        }
    }
    FOR(i,m-1,n) ans=(ans+dp[0][i])%M;
    cout<<ans<<'\n';
    return 0;
}