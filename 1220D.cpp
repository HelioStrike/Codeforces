#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll n,c,x,a[N],ab[N],bts[100];

int main()
{
    cin>>n;
    FOR(i,0,n)
    {
        cin>>a[i]; x=a[i]; c=0;
        while(x)
        {
            if(x&1) { ab[i]=c,bts[c]++; break; }
            c++; x>>=1;
        }
    }
    c=0;
    FOR(i,0,64) if(bts[i]>c) x=i,c=bts[i];
    cout<<n-c<<'\n';
    FOR(i,0,n) if(ab[i]!=x) cout<<a[i]<<' ';
    cout<<'\n';

    return 0;
}
