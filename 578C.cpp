#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,a[N];

double f(double x)
{
    double maxm=0,minm=0,c=0;
    FOR(i,0,n) c+=a[i]-x,maxm=max(maxm,c),minm=min(minm,c);
    return maxm-minm;
}

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i];
    double l=-1e9,m1,m2,r=1e9;
    FOR(i,0,200)
    {
        m1=l+(r-l)/3;
        m2=r-(r-l)/3;
        if(f(m1)<f(m2)) r=m2;
        else l=m1;
    }
    printf("%lf\n",f(m1));

    return 0;
}