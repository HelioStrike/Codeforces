#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 505
using namespace std;

int n,m,a[MAXN][MAXN],k,x,y,z;

int main()
{
    cin>>n>>m;
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1) cin>>a[i][j];
        k^=a[i][1]; 
        for(z=2;z<=m;z++) if(a[i][z]!=a[i][1]) break;
        if(z!=m+1) x=i,y=z; 
    }

    if(k)
    {
        cout<<"TAK"<<'\n';
        FOR(i,0,n) cout<<1<<' ';
        cout<<'\n';
    }
    else
    {
        if(x)
        {
            cout<<"TAK"<<'\n';
            FOR(i,1,x) cout<<1<<' ';
            cout<<y<<' ';
            FOR(i,x+1,n+1) cout<<1<<' ';
            cout<<'\n';
        } else cout<<"NIE"<<'\n';
    }

    return 0;
}