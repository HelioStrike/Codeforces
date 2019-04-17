#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 200010
using namespace std;

ll n,m,k,c1,c2,a[MAXN],o[MAXN],s[MAXN],dp[MAXN];

int main()
{
    cin>>n>>m>>k;
    FOR(i,1,n+1) cin>>a[i];
    sort(a+1,a+n+1);
    FOR(i,1,k+1) s[i]=s[i-1]+a[i];
    FOR(i,0,m)
    {
        cin>>c1>>c2;
        o[c1]=max(o[c1],c2);
    }
    memset(dp,16,sizeof(dp)); dp[0]=0;
    FOR(i,1,k+1) FOR(j,0,i+1) dp[i]=min(dp[i],dp[i-j]+s[i]-s[i-j+o[j]]);
    cout<<dp[k]<<'\n';
    return 0;
}