#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 300010
using namespace std;

int n,k,a[N],l,m,h;

bool doit()
{
    int p=0;
    FOR(i,0,n)
    {
        if(a[i]+m<p) return false;
        if(a[i]>p && ((a[i]+m)%k<p || a[i]+m<k)) p=a[i];
    }
    return true;
}

int main()
{
    cin>>n>>k; FOR(i,0,n) cin>>a[i];

    l=0,h=k;
    while(l<=h)
    {
        m=(l+h)/2;
        if(doit()) h=m-1;
        else l=m+1;
    }
    cout<<l<<'\n';

    return 0;
}