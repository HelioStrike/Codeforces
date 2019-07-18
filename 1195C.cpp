#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

long long n,h[N][2],d[N][2];

int main()
{
    cin>>n; FOR(i,0,2) FOR(j,1,n+1) cin>>h[j][i];
    d[1][0]=h[1][0],d[1][1]=h[1][1];

    FOR(i,2,n+1)
    {
        d[i][0]=max(d[i][0],d[i-1][1]+h[i][0]);
        d[i][1]=max(d[i][1],d[i-1][0]+h[i][1]);

        d[i][0]=max(d[i][0],d[i-2][1]+h[i][0]);
        d[i][1]=max(d[i][1],d[i-2][0]+h[i][1]);
    }
    cout<<max(d[n][0],d[n][1])<<'\n';

    return 0;
}
