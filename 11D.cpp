#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 20
using namespace std;

ll n,m,x,y,fs,ans,g[N][N],dp[1<<N][N];

int main()
{
    cin>>n>>m;
    FOR(i,0,m)
    {
        cin>>x>>y; x--,y--,ans--;
        g[x][y]=g[y][x]=dp[(1<<x)|(1<<y)][max(x,y)]=1;
    }
    FOR(i,1,1<<n)
    {
        fs=0;
        while(!(i&(1<<fs))) fs++;
        FOR(j,fs,n) 
        {
            FOR(k,fs,n) dp[i|(1<<k)][k]+=(g[j][k]&&!(i&(1<<k)))?dp[i][j]:0;
            ans+=g[fs][j]?dp[i][j]:0;
        }
    }
    cout<<ans/2<<'\n';
    return 0;
}