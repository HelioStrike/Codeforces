#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define M 1000000007
#define N 1010
using namespace std;

int n,m,imp,r[N],c[N],mp[N][N];
long long ans;

int main()
{
    cin>>n>>m;
    FOR(i,0,n)
    {
        cin>>r[i];
        FOR(j,0,r[i]) mp[i][j]=1;
    }
    FOR(i,0,m) 
    {
        cin>>c[i];
        FOR(j,0,c[i]) mp[j][i]=1;
    }
    FOR(i,0,n)
    {
        if(mp[i][r[i]]==1)
        {
            imp=1;
            break;
        }
    }
    FOR(i,0,m)
    {
        if(mp[c[i]][i]==1)
        {
            imp=1;
            break;
        }
    }
    if(imp)
    {
        cout<<0<<'\n';
        return 0;
    }
    ans=1;
    FOR(i,0,n) FOR(j,0,m) if(j>r[i] && i>c[j]) ans=(ans*2)%M;
    cout<<ans<<'\n';

    return 0;
}
