#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;


int main()
{
    ll n; cin>>n;
    ll a[n]; FOR(i,0,n) cin>>a[i];

    ll ans=0;
    ll neg=0,zero=0;
    FOR(i,0,n)
    {
        if(a[i]>0) ans+=a[i]-1;
        else if(a[i]<0) ans+=-a[i]-1,neg++;
        else zero++;
    }
    if(zero) cout<<ans+zero<<'\n';
    else if(neg%2) cout<<ans+2<<'\n';
    else cout<<ans<<'\n';

    return 0;
}
