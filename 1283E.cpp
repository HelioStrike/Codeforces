#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,x,mn,mx,a[N];

int main()
{
    cin>>n; FOR(i,0,n) cin>>x,a[x]++;
    FOR(i,1,n+1)
    {
        if(!a[i]) continue;
        mn++; i+=2;
    }
    FOR(i,1,n+1)
    {
        if(!a[i]) continue;
        if(!a[i-1]) a[i]--,a[i-1]++;
        if(a[i]>1) a[i]--,a[i+1]++;
    }
    FOR(i,0,n+2) mx+=(a[i]>0);
    cout<<mn<<' '<<mx<<'\n';

    return 0;
}