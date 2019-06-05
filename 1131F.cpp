#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 150010
using namespace std;

int n,x,y,p[N],r[N],g[N];

int f(int a) { return p[a]==a?a:p[a]=f(p[a]); }

int main()
{
    cin>>n;
    FOR(i,1,n+1) p[i]=r[i]=i;
    FOR(i,1,n) cin>>x>>y,x=f(x),y=f(y),g[r[x]]=y,r[x]=r[y],p[y]=x;
    for(int i=f(2);i;i=g[i]) cout<<i<<' ';
    cout<<'\n';
    return 0;
}