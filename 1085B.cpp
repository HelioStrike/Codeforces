#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int main()
{
    int n,k,ans=INT_MAX; scanf("%d%d",&n,&k);
    float x;
    for(int i=k-1;i>=1;i--)
    {
        if(n%i==0)
        {
            ans=min(ans,(n/i)*k+i);
        }
    }
    cout<<ans<<'\n';

    return 0;
}