#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define INF 1e9
#define N 4010
using namespace std;

int n,k,f[N],ft[N],x[N][N],y[N][N];

void rec(int s,int e,int s0,int e0)
{
    if(s==e) return;
    int m=(s+e)/2;
    int r=INF,rp;
    FOR(i,s0,min(m,e0))
    {
        int r0=f[i]+y[m][m]-y[m][i]-y[i][m]+y[i][i];
        if(r0<r) r=r0,rp=i;
    }
    ft[m]=r;
    rec(s,m,s0,rp+1);
    rec(m+1,e,rp,e0);
}

int main()
{
    scanf("%d%d",&n,&k); FOR(i,0,n) FOR(j,0,n) getchar(),x[i][j]=getchar()-'0';
    FOR(i,1,n+1) FOR(j,1,n+1) y[i][j]=y[i][j-1]+y[i-1][j]-y[i-1][j-1]+x[i-1][j-1];
    FOR(i,0,n+1) f[i]=y[i][i];
    FOR(i,1,k)
    {
        rec(1,n+1,0,n);
        memcpy(f,ft,sizeof(f));
    }
    printf("%d\n",f[n]/2);

    return 0;
}