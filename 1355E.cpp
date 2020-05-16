#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll n,a,r,m,low,mid1,mid2,high,f1,f2,ans,h[N];

ll calc(ll ch)
{
    ll con=0,dem=0,cost=0;
    FOR(i,0,n)
    {
        if(h[i]>ch) dem+=h[i]-ch;
        else if(h[i]<ch) con+=ch-h[i];
    }
    if(m<a+r)
    {
        ll mov=min(con,dem);
        con-=mov,dem-=mov;
        cost+=mov*m;
    }
    cost+=con*a;
    cost+=dem*r;
    return cost;
}

int main()
{
    cin>>n>>a>>r>>m; ans=LONG_LONG_MAX;
    FOR(i,0,n) cin>>h[i];
    low=0,high=(ll)1e9+10;
    int cnt=0;
    while(low<high-4)
    {
        mid1 = (high+low)/2;
        //mid1 = low + (high - low) / 3;
        //mid2 = high - (high - low) / 3;
        f1=calc(mid1);
        f2=calc(mid1+1);
        //cout<<low<<' '<<high<<' '<<mid1<<' '<<f1<<' '<<mid2<<' '<<f2<<'\n';
        if(f1>f2) low=mid1;
        else high=mid1;
        cnt++; ans=min(ans,min(f1,f2));
    }
    FOR(i,low,high+1) ans=min(ans,calc(i));
    cout<<ans<<'\n';
    return 0;
}