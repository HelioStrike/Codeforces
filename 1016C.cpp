#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 300010
#define ll long long
using namespace std;

ll a[2][MAXN],p[2][MAXN],n,tot,ans;

int main()
{
    cin >> n;
    FOR(i,0,2) FOR(j,0,n) cin >> a[i][j];
    FOR(i,0,n) tot += 2*i*a[i&1][i] + (2*i+1)*a[(i+1)&1][i];
    ans = tot;
    FOR(i,0,n-1) FOR(j,0,2) p[!j][i+1] = p[!j][i] + 2*(i+1)*a[j][n-i-2] - 2*(i+1)*a[!j][n-i-1];
    FOR(i,0,n-1) tot += p[((i+1)&1)^(n+1)&1][i+1], ans = tot>ans?tot:ans;
    cout << ans << '\n';

    return 0;
}