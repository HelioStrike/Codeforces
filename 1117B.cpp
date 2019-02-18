#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;


int main()
{
    int n,m,k; scanf("%d%d%d",&n,&m,&k); int a[n]; FOR(i,0,n) scanf("%d",&a[i]);
    int maxi=max_element(a,a+n)-a; int maxm=a[maxi]; a[maxi]=-1;
    int max2i=max_element(a,a+n)-a; int max2m=a[max2i];

    ll ans=k*(m/(k+1)) + m%(k+1);
    ans=ans*maxm+(m-ans)*max2m;

    printf("%lli\n",ans);

    return 0;
}