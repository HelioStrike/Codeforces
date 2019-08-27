#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 400010
using namespace std;

int n,k,l,r,c,ans,a[N];

int main()
{
    cin>>n>>k; k=8*k/n; k=k>30?1<<30:1<<k; 
    FOR(i,0,n) cin>>a[i]; sort(a,a+n);
    c=1,ans=1<<30;
    while(r<n)
    {
        while(c>k) { l++; if(a[l]!=a[l-1]) c--; }
        ans=min(ans,n-r+l-1);
        r++;
        if(a[r]!=a[r-1]) c++;
    }
    cout<<ans<<'\n';

    return 0;
}
