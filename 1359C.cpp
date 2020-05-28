#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define ld long double
using namespace std;

ll e,h,c,t,l,m,r,bestn;
ld bestt;

ld cmp(ll n)
{
    ll hc,cc;
    ld nt;
    cc=n/2;
    hc=n-cc;
    nt=(hc*h+cc*c)*1.0/n;
    if(abs(nt-t)<abs(bestt-t))
    {
        bestt=nt;
        bestn=n;
    }
    return abs(nt-t);
}

int main()
{
    cin>>e;
    while(e--)
    {
        cin>>h>>c>>t;
        bestt=LONG_LONG_MAX*1.0,bestn=-1;
        l=1,r=1000000000;
        FOR(i,1,5) cmp(i);
        while(r-l>1)
        {
            m=(l+r)/2;
            if(cmp(2*m-1)>cmp(2*m+1)) l=m;
            else r=m;
        }
        cmp(l); cmp(l+1);
        cout<<bestn<<'\n';
    }
    return 0;
}