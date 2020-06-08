#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 400010
using namespace std;

ll n,k,a[N],l,r,cur,curd,ans;

ll nsum(ll n)
{
    if(n<=0) return 0;
    return n*(n+1)/(2l);
}

ll rsum(ll l, ll r)
{
    return nsum(r)-nsum(l-1);
}

int main()
{
    cin>>n>>k;
    FOR(i,0,n) 
    {
        cin>>a[i];
        if(a[i]>=k) ans=max(ans,rsum(a[i]-k+1,a[i]));
    }
    FOR(i,n,2*n) a[i]=a[i-n];
    while(r<2*n)
    {
        while(r<2*n && curd+a[r]<=k) cur+=nsum(a[r]),curd+=a[r],r++;
        ans=max(ans,cur);
        if(r<2*n-1) ans=max(ans,cur+nsum(k-curd));
        cur-=nsum(a[l]),curd-=a[l],l++;
        ans=max(ans,cur+rsum(a[l-1]-(k-curd)+1,a[l-1]));
    }
    l=r=curd=cur=0;
    reverse(a,a+2*n);
    while(r<2*n)
    {
        while(r<2*n && curd+a[r]<=k) cur+=nsum(a[r]),curd+=a[r],r++;
        ans=max(ans,cur);
        if(r<2*n-1) ans=max(ans,cur+rsum(a[r]-(k-curd)+1,a[r]));
        cur-=nsum(a[l]),curd-=a[l],l++;
    }
    cout<<ans<<'\n';
    return 0;
}