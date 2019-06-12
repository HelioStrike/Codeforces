#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

long long n,m,k,x,y,a[N],b[N],c[N],l[N],r[N],d[N];

int main()
{
    cin>>n>>m>>k;
    FOR(i,1,n+1) cin>>a[i];
    FOR(i,1,m+1) cin>>l[i]>>r[i]>>d[i];
    FOR(i,1,k+1) cin>>x>>y,b[x]++,b[y+1]--;
    FOR(i,1,m+1) b[i]+=b[i-1],c[l[i]]+=b[i]*d[i],c[r[i]+1]-=b[i]*d[i];
    FOR(i,1,n+1) c[i]+=c[i-1],cout<<c[i]+a[i]<<' ';
    cout<<'\n';

    return 0;
}
