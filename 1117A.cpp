#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int main()
{
    int n; scanf("%d",&n); int a[n]; FOR(i,0,n) scanf("%d",&a[i]);
    int maxm=*max_element(a,a+n);
    int ans=0,curr=0;
    FOR(i,0,n)
    {
        if(a[i]==maxm) curr++,ans=max(ans,curr);
        else curr=0;
    }
    printf("%d\n",ans);

    return 0;
}