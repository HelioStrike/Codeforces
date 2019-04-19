#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 200010
using namespace std;

int n,k,x,m,a[MAXN],l[MAXN],r[MAXN],ans[MAXN];

void rep(int c)
{
    ans[c]=x%2+1;
    l[r[c]]=l[c];
    r[l[c]]=r[c];
}

int main()
{
    cin>>n>>k;
    FOR(i,1,n+1) cin>>x,l[i]=i-1,r[i]=i+1,a[x]=i;

    x=0;
    for(int i=n;i>=1;i--)
    {
        m=a[i];
        if(ans[m]) continue;
        rep(m);
        m=l[m];
        for(int j=0;j<k && m>=1; j++) rep(m),m=l[m];
        m=r[m];
        for(int j=0;j<k && m>=1; j++) rep(m),m=r[m];
        x++;
    }
    FOR(i,1,n+1) cout<<ans[i];
    cout<<'\n';

    return 0;
}