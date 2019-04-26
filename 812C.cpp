#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,s,l,m,h,curr,a[N];

int main()
{
    cin>>n>>s; FOR(i,0,n) cin>>a[i];

    l=0,h=n+1;
    while(l<h)
    {
        m=(l+h)/2;
        curr=0;
        for(int i=0;i<m && curr<=s;i++) curr+=a[i]+m*(i+1);
        if(curr<=s) l=m+1;
        else h=m;
    }
    while(curr>s) { curr=0; m--; for(int i=0;i<m;i++) curr+=a[i]+m*(i+1); }
    cout<<m<<' '<<curr<<'\n';

    return 0;
}
