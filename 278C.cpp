#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 210
using namespace std;

int n,m,x,y,a,b,p[N],ans,z;

int f(int a) { return p[a]==a?a:p[a]=f(p[a]); }

int main()
{
    cin>>n>>m;
    FOR(i,0,n+m) p[i]=i;
    FOR(i,0,n)
    {
        cin>>x; if(x==0) z++;
        FOR(j,0,x) cin>>y,p[f(n+y-1)]=f(i);
    }
    FOR(i,0,n) { p[i]=f(i); if(i==p[i]) ans++; }
    cout<<ans-1+(z==n)<<'\n';

    return 0;
}
