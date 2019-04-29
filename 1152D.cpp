#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 1010
#define P 1000000007
using namespace std;

int n,f[N][N];

int main()
{
    cin>>n;
    FOR(i,1,n+2) FOR(j,i,n+2) f[i][j]=(f[i-1][j]+f[i][j-1]+((i+j)&1))%P;
    cout<<f[n+1][n+1]<<'\n';

    return 0;
}