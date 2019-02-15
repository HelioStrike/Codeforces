#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 100010
using namespace std;


int n,m,k,a[MAXN],b[MAXN];
ll tot;

bool cmp(int b1,int b2) { return (a[b1]>a[b2]); }

int main()
{
    scanf("%d%d%d",&n,&m,&k); FOR(i,1,n+1) scanf("%d",&a[i]),b[i]=i;
    sort(b+1,b+n+1,cmp);
    sort(b+1,b+m*k+1);

    FOR(i,1,m*k+1) tot+=a[b[i]];
    printf("%lli\n",tot);

    for(int i=m;i<m*k;i+=m) printf("%d ",b[i]);
    printf("\n");

    return 0;
}