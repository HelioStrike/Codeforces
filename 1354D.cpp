#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 1000010
using namespace std;

int t,n,q,l,r,m,c,a[2*N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    FOR(i,0,n+q) cin>>a[i];
    l=0,r=n+1;
    while(l<r)
    {
        m=(l+r)/2; c=0;
        FOR(i,0,n+q)
        {
            if(a[i]>m) continue;
            else if(a[i]>0) c++;
            else if(abs(a[i])<=c) c--;
        }
        if(c==0) l=m+1;
        else r=m;
    }
    if(l==n+1) cout<<0<<'\n';
    else cout<<l<<'\n';
    return 0;
}