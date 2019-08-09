#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    ll n,q,x;
    map<ll,ll> a,b,c;
    cin>>n;
    FOR(i,0,n)
    {
        cin>>x; b.clear(); b[x]++;
        for(auto p:a)b[__gcd(x,p.first)]+=p.second;
        swap(a,b);
        for(auto p:a)c[p.first]+=p.second;
    }
    cin>>q;
    FOR(i,0,q) cin>>x,cout<<c[x]<<'\n';
    cout<<'\n';

    return 0;
}
