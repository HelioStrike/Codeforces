#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
#define M 205
using namespace std;

int t,n,x,y,ans,a[N][M];
bool ok;
vector<int> v[M];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,M) v[i].clear(); ans=0;
        FOR(i,1,n+1) 
        {
            cin>>x;
            FOR(j,0,M) a[i][j]=a[i-1][j]+(x-1==j);
            v[x-1].push_back(i);
        }
        FOR(i,0,M) ans=max(ans,(int)v[i].size());
        FOR(i,0,M)
        {
            FOR(j,0,v[i].size()/2)
            {
                x=v[i][j],y=v[i][v[i].size()-j-1];
                FOR(k,0,M)
                {
                    if(i==k) continue;
                    ans=max(ans,2*(j+1)+a[y][k]-a[x][k]);                
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}