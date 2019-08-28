#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 1000000007
#define N 100010
using namespace std;

ll n,c,p[N],d[N][2];

int main()
{
    cin>>n;
    FOR(i,1,n) cin>>p[i];
    FOR(i,0,n) cin>>c,d[i][c]=1;
    for(int i=n-1;i>=1;i--)
    {
        d[p[i]][1]=(d[p[i]][1]*(d[i][0]+d[i][1])+d[p[i]][0]*d[i][1])%M;
        d[p[i]][0]=(d[p[i]][0]*(d[i][0]+d[i][1]))%M;
    }
    cout<<d[0][1]<<'\n';

    return 0;
}
