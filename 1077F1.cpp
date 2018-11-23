#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

const int maxn = 200;
ll dp[maxn+1][maxn+1];

int main()
{
    int n,k,x; cin >> n >> k >> x;
    ll a[n]; FOR(i,0,n) cin >> a[i];

    FOR(i,0,x)
    {
        FOR(j,i,min(i+k,n))
        {
            FOR(l,j,min(j+k,n)) dp[i+1][l+1] = max(dp[i+1][l+1], dp[i][j] + a[l]);
        }
    }

    ll maxm = 0;
    FOR(i,n-k,n) maxm = max(maxm, dp[x][i+1]);
    cout << (maxm==0?-1:maxm) << '\n';
}