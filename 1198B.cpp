#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,q,x,y,z,a[N],b[N],t[N];

int main()
{
    cin>>n; FOR(i,1,n+1) cin>>a[i];
    cin>>q;
    FOR(i,0,q)
    {
        cin>>x>>y;
        if(x-1) t[i]=y;
        else cin>>z,a[y]=z,b[y]=i;
    }
    for(int i=q-2;i>=0;i--) t[i]=max(t[i],t[i+1]);
    FOR(i,1,n+1) cout<<max(a[i],t[b[i]])<<' ';
    cout<<'\n';

    return 0;
}

