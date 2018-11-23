#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n]; FOR(i,0,n) cin >> a[i];
    sort(a, a+n);
    int ans = a[n-1];
    if(n>1) ans-=a[0];
    FOR(i,1,n-1) ans += abs(a[i]);
    cout << ans << '\n';
}