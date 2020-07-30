#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,k,z,tim,par,tot,ans,maxm,a[N],b[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>z; tot=0;
        FOR(i,1,n+1) cin>>a[i],b[i]=a[i]+a[i+1];
        ans=tot=a[1];
        FOR(i,2,k+2)
        {
            tot+=a[i];
            tim=min(z,(k-(i-1))/2);
            par=k-(i-1)-tim*2;
            ans=max(ans,tot);
            ans=max(ans,tot+(a[i]+a[i-1])*tim+b[i+par]-b[i]);
            if(tim!=z && z>0 && par>0) ans=max(ans,tot+(a[i]+a[i-1])*tim+a[i+par-2]+b[i+par-1]-b[i]);
        }
        cout<<ans<<'\n';
    }

    return 0;
}