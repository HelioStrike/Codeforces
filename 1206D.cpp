#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
#define M 250
#define K 65
using namespace std;

ll n,ans=1e9,a[N],bs[K],g[M][M];

int main()
{
    cin>>n;
    FOR(i,0,n)
    {
        cin>>a[i];
        if(!a[i]) --i,--n;
        else FOR(j,0,60) bs[j]+=a[i]>>j&1;
    }
    FOR(i,0,60) if(bs[i]>2) { cout<<3<<'\n'; return 0; }
    memset(g,63,sizeof(g));
    FOR(i,0,n) FOR(j,0,n) if(i!=j && (a[i]&a[j])) g[i][j]=1;
    FOR(i,0,n)
    {
        FOR(j,0,i) FOR(k,0,j) if((a[j]&a[i]) &&(a[i]&a[k])) ans=min(ans,g[j][k]+2);
        FOR(j,0,n) FOR(k,0,n) g[j][k]=min(g[j][k],g[j][i]+g[i][k]);
    }
    cout<<(ans>n?-1:ans)<<'\n';

    return 0;
}
