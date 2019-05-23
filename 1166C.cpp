#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int n,a[N],ans,j;

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i],a[i]=abs(a[i]);
    sort(a,a+n);
    FOR(i,0,n)
    {
        for(;j<n && a[j]<=2*a[i];) j++;
        ans+=j-i-1;
    }
    cout<<ans<<'\n';

    return 0;
}