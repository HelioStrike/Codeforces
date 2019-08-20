#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define INF 1000010
#define N 110
#define K 1000010
using namespace std;

int n,k,su,pre,ans,a[K],v[K],g[N][N];
string s[N];

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>s[i];
    FOR(i,0,n) FOR(j,0,n) g[i][j]=s[i][j]=='1'?1:INF;
    FOR(i,0,n) FOR(j,0,n) FOR(k,0,n) g[j][k]=min(g[j][k],g[j][i]+g[i][k]);
    cin>>k; FOR(i,0,k) cin>>a[i],a[i]--;
    v[0]=1; pre=a[k-1]; su=0;
    for(int i=k-2;i>=0;i--)
    {
        su+=1;
        if(a[i]==pre || g[a[i]][pre]<=su)
        {
            v[i+1]=1;
            pre=a[i+1];
            su=0;
        }
    }
    FOR(i,0,k) if(v[i]==1) ans++;
    cout<<ans<<'\n';
    FOR(i,0,k) if(v[i]==1) cout<<a[i]+1<<' ';
    cout<<'\n';

    return 0;
}

