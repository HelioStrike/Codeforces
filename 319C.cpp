#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pll pair<ll,ll>
#define N 100010
using namespace std;

ll n,l,r,a[N],b[N],q[N],dp[N];

double m(int x,int y) {
    return ((double)dp[x]-dp[y])/(b[x]-b[y]);
}

int main()
{
    cin>>n; 
    FOR(i,0,n) cin>>a[i];
    FOR(i,0,n) cin>>b[i];
    FOR(i,1,n)
    {
        while(l<r && m(q[l],q[l+1])>-a[i]) l++;
        dp[i]=dp[q[l]]+b[q[l]]*a[i];
        while(l<r && m(q[r-1],q[r])<m(q[r],i)) r--;
        q[++r]=i;
    }
    cout<<dp[n-1]<<'\n';

    return 0;
}