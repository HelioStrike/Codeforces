#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pll pair<ll,ll>
#define N 1000010
using namespace std;

struct rec{ll x,y,a;} rex[N];
ll n,l,r,q[N],dp[N];

bool cmp(rec a,rec b) { return a.x<b.x || (a.x==b.x && a.y>b.y); }

int main()
{
    scanf("%lld",&n);
    FOR(i,1,n+1) scanf("%lld%lld%lld",&rex[i].x,&rex[i].y,&rex[i].a);
    sort(rex+1,rex+n+1,cmp);
    FOR(i,1,n+1)
    {
        while(l<r && dp[q[l]]-dp[q[l+1]]<rex[i].y*(rex[q[l]].x-rex[q[l+1]].x)) l++;
        ll tmp=q[l];
        dp[i]=dp[tmp]+(rex[i].x-rex[tmp].x)*rex[i].y-rex[i].a;
        while(l<r && 1.0*(dp[i]-dp[q[r-1]])/(rex[i].x-rex[q[r-1]].x)>=1.0*(dp[q[r]]-dp[q[r-1]])/(rex[q[r]].x-rex[q[r-1]].x)) r--;
        q[++r]=i;
    }
    ll x=*max_element(dp+1,dp+n+1);
    printf("%lld\n",x);

    return 0;
}