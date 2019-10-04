#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 5
#define M 105
using namespace std;

int t,n,m,c,a[N][M],d[M][1<<N],p[M][1<<N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; FOR(i,0,n) FOR(j,1,m+1) cin>>a[i][j];
        FOR(i,1,m+1)
        {
            FOR(j,0,1<<n)
            {
                d[i][j]=0;
                FOR(k,0,n)
                {
                    c=0;
                    FOR(l,0,n)
                    {
                        if((j>>l)&1) c+=a[(k+l)%n][i];
                    }
                    d[i][j]=max(d[i][j],c);
                }
            }
        }
        FOR(i,1,m+1)
        {
            FOR(j,0,1<<n)
            {
                p[i][j]=p[i-1][j];
                for(int k=j;k;k=(k-1)&j) p[i][j]=max(p[i][j],d[i][k]+p[i-1][j^k]);
            }
        }
        cout<<p[m][(1<<n)-1]<<'\n';
    }

    return 0;
}
