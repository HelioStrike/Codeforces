#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MOD 998244353
#define MAXN 300010
using namespace std;

int t,V,E,v1,v2,tot,ones,m[MAXN];
ll ans,p[MAXN];
vector<int> g[MAXN];

int dfs(int v, int mode)
{
    m[v]=mode,tot++;
    if(mode==1) ones++;
    for(auto u: g[v])
    {
        if(m[u]) 
        {
            if(mode==m[u]) return 1;
        }
        else
        {
            if(dfs(u,3-mode)) return 1;
        }
    }
    return 0;
}

int main()
{
    p[0]=1; FOR(i,1,MAXN) p[i]=(p[i-1]<<1)%MOD;
    scanf("%d",&t);

    while(t--)
    {
        ans=0;
        scanf("%d%d",&V,&E);
        FOR(i,1,V+1) g[i].clear(),m[i]=0;
        FOR(i,0,E)
        {
            scanf("%d%d",&v1,&v2);
            g[v1].push_back(v2);
            g[v2].push_back(v1);
        }

        FOR(i,1,V+1)
        {
            if(!m[i])
            {
                tot=ones=0;
                if(dfs(i,1)) { ans=0; break;}
                ans=(ans==0?1:ans)*(p[ones]+p[tot-ones])%MOD;
            }
        } 

        printf("%lli\n",ans);
    }

    return 0;
}