#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,a[100010],d[1<<22];

int main()
{
    memset(d,-1,sizeof(d));
    cin>>n; FOR(i,0,n) cin>>a[i],d[a[i]]=a[i];

    FOR(i,0,1<<22)
    {
        if(d[i]<0)
        {
            FOR(j,0,22) if(((i>>j)&1)&&d[i^(1<<j)]>=0) d[i]=d[i^(1<<j)];
        }
    }

    FOR(i,0,n) cout<<d[(1<<22)-a[i]-1]<<' ';
    cout<<'\n';

    return 0;
}
