#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 300010
using namespace std;

int n,m,c,f[N],g[N];
struct edge{int x,y,z;} e[N];

bool cmp(const edge& a,const edge& b) {return a.z<b.z;}

int main()
{
    scanf("%d%d",&n,&m);
    FOR(i,1,m+1) scanf("%d%d%d",&e[i].x,&e[i].y,&e[i].z);
    sort(e+1,e+m+1,cmp);
    FOR(c,1,m+1)
    {
        int k;
        for(k=c;e[k].z==e[c].z;k++) g[e[k].y]=max(g[e[k].y],f[e[k].x]+1); 
        for(k=c;e[k].z==e[c].z;k++) f[e[k].y]=g[e[k].y]; 
        c=k-1;
    }
    printf("%d\n",*max_element(f+1,f+n+1));

    return 0;
}