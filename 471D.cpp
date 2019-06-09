#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 400010
using namespace std;

int n,m,a[N],b[N],c[N],d[N],j,ans;

int main()
{
    cin>>n>>m; 
    FOR(i,0,n) cin>>a[i];
    FOR(i,0,m) cin>>b[i];
    if(m==1) { cout<<n<<'\n'; return 0; }
    FOR(i,1,m) c[i-1]=b[i]-b[i-1];
    c[m-1]=-1e9-1;
    FOR(i,1,n) c[i+m-1]=a[i]-a[i-1];

    FOR(i,1,m+n-1)
    {
        j=d[i-1];
        while(j>0 && c[i]!=c[j]) j=d[j-1];
        if(c[i]==c[j]) j++;
        d[i]=j;
        if(d[i]==m-1) ans++;
    }
    cout<<ans<<'\n';

    return 0;
}
