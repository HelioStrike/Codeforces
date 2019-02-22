#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int main()
{
    int n,m; scanf("%d%d",&n,&m);
    int a[n]; FOR(i,0,n) scanf("%d",&a[i]);
    sort(a,a+n,greater<>());
    if(accumulate(a,a+n,0)<m) { printf("%d\n",-1); return 0; }

    int l=1,mm,h=n,cnt;
    while(l<h)
    {
        mm=(l+h)/2;
        cnt=0;
        FOR(i,0,n) cnt+=max(a[i]-i/mm,0);
        if(cnt<m) l=mm+1;
        else h=mm;
    }
    printf("%d\n",l);

    return 0;
}