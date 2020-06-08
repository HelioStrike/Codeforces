#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 510
using namespace std;

ll n,ans,a[N];

int main()
{
    cin>>n; FOR(i,0,n) scanf("%lld",&a[i]);
    if(n==1) ans=a[0];
    if(n==2) ans=a[0]|a[1];
    FOR(i,0,n)
    {
        FOR(j,i+1,n)
        {
            FOR(k,j+1,n) ans=max(ans,a[i]|a[j]|a[k]);
        }
    }
    cout<<ans<<'\n';
    return 0;
}