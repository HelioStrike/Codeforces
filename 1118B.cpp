#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 200010
using namespace std;

int a[MAXN],b[MAXN][2];

int main()
{
    int n,e,o,cnt,ans=0; scanf("%d",&n);
    FOR(i,1,n+1) scanf("%d",&a[i]);
    e=0,o=0;
    FOR(i,1,n+1)
    {
        if(i%2) o+=a[i];
        else e+=a[i];
        b[i][0]=e,b[i][1]=o;
    }

    FOR(i,1,n+1)
    {
        if(b[i-1][0]+b[n][1]-b[i][1]==b[i-1][1]+b[n][0]-b[i][0]) ans++;
    }

    printf("%d\n",ans);

    return 0;
}