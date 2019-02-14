#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 100010
#define ll long long
using namespace std;

ll n,k,a,b,arr[MAXN];

ll solve(int l,int r)
{
    int c=upper_bound(arr,arr+k,r)-lower_bound(arr,arr+k,l);
    if(!c) return a;
    if(l==r) return b*c;
    int m=(l+r)/2;
    return min(b*c*(r-l+1),solve(l,m)+solve(m+1,r));
}

int main()
{
    cin >> n >> k >> a >> b;
    FOR(i,0,k) cin >> arr[i];
    sort(arr,arr+k);
    cout << solve(1,1<<n) << '\n';
    return 0;
}