#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 101
using namespace std;

int n,m,h,c,rs[MAXN],cs[MAXN],mapp[MAXN][MAXN];

int main()
{
    cin>>n>>m>>h;
    FOR(i,0,m) cin>>cs[i];
    FOR(i,0,n) cin>>rs[i];
    FOR(i,0,n) FOR(j,0,m) cin>>mapp[i][j];

    FOR(i,0,n)
    {
        FOR(j,0,m) if(mapp[i][j]!=0) mapp[i][j]=rs[i];
    }

    FOR(i,0,m)
    {
        FOR(j,0,n) if(mapp[j][i]>cs[i]) mapp[j][i]=cs[i];
    }

    FOR(i,0,n)
    {
        FOR(j,0,m) cout<<mapp[i][j]<<' ';
        cout<<'\n';
    }

    return 0;
}