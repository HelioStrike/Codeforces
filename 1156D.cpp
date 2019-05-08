#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int n,u,v,w,x,y,cat[2][N],siz[2][N]; ll ans;

int find(int w,int p) { return p==cat[w][p]?p:cat[w][p]=find(w,cat[w][p]); }

int main()
{
    cin>>n;
    FOR(i,1,n+1) cat[0][i]=cat[1][i]=i,siz[0][i]=siz[1][i]=1;
    FOR(i,2,n+1)
    {
        cin>>u>>v>>w;
        x=find(w,u),y=find(w,v);
        if(x!=y) cat[w][x]=y,siz[w][y]+=siz[w][x];
    }
    FOR(i,1,n+1) ans+=1ll*siz[0][find(0,i)]*siz[1][find(1,i)]-1;
    cout<<ans<<'\n';

    return 0;
}