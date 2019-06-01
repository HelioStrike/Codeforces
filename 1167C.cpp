#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,m,x,y,p[1000010],a[1000010];

int f(int x) { return p[x]==x?x:p[x]=f(p[x]);}

int main()
{
    cin>>n>>m;
    FOR(i,1,n+m+1) p[i]=i;
    FOR(i,1,m+1) for(cin>>x;x>0;x--) cin>>y,p[f(y)]=f(n+i);
    FOR(i,1,n+1) p[i]=f(i);
    FOR(i,1,n+1) a[p[i]]++;
    FOR(i,1,n+1) cout<<a[p[i]]<<' ';
    cout<<'\n';

    return 0;
}