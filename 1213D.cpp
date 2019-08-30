#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 400010
using namespace std;

ll n,k,x,l,r,cur,curl,curs,curans,ans=LONG_MAX,mx,a[N],c[N],s[N];

int main()
{
    cin>>n>>k;
    FOR(i,1,n+1) cin>>a[i],c[a[i]]++,mx=max(mx,a[i]);
    FOR(i,1,N) s[i]=s[i-1]+c[i];
    FOR(i,1,mx+1)
    {
        l=i,r=i; curs=curl=0,curans=0;
        while(r<N)
        {
            if(curs==k) break;
            cur=s[r]-s[l-1];
            if(curs+cur<k) curans+=curl*cur,curs+=cur;
            else curans+=curl*(k-curs),curs=k;
            l=max(2*l,r+1); r=2*r+1; curl++;
        }
        if(curs==k) ans=min(ans,curans);
    }
    cout<<ans<<'\n';

    return 0;
}

