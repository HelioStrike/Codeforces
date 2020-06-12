#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 110
using namespace std;

int t,n,m,x,ans;
map<int,int> d[2];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; d[0].clear(); d[1].clear(); ans=0;
        FOR(i,0,n)
        {
            FOR(j,0,m)
            {
                cin>>x;
                d[x][i+j]++;
            }
        }
        FOR(i,0,n+m) 
        {
            if(i!=n+m-2-i) ans+=min(d[0][i]+d[0][n+m-2-i],d[1][i]+d[1][n+m-2-i]);
        }
        cout<<ans/2<<'\n';
    }
    return 0;
}