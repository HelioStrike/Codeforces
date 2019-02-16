#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define MAXN 100010
using namespace std;


ll n,k,m,a[MAXN],tot;
double ans;

int main()
{
    cin >> n >> k >> m;
    FOR(i,1,n+1) scanf("%d",&a[i]),tot+=a[i];    
    sort(a+1,a+n+1);

    FOR(i,0,n)
    {
        tot-=a[i];
        ans=max(ans,(double)(tot+min(k*(n-i),m-i))/(n-i));
    }
    printf("%f\n",ans);

    return 0;
}