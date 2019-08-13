#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 400010
using namespace std;

ll n,gcd,a[N];

ll numdiv(ll n)
{
    ll c=0,k=sqrt(n);
    FOR(i,1,k+1)
    {
        if(n%i==0) c+=2;
    }
    if(k*k==n) c--;
    return c;
}

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i];
    gcd=*max_element(a,a+n);
    FOR(i,0,n) gcd=__gcd(gcd,a[i]);
    cout<<numdiv(gcd)<<'\n';

    return 0;
}
