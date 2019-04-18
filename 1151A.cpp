#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int main()
{
    int n,k,ops,ans=1e9; string s,g="ACTG"; cin>>n>>s;
    FOR(i,0,n-3)
    {
        ops=0;
        FOR(j,0,4)
        {
            k=abs(g[j]-s[i+j]);
            ops+=min(k,26-k);
        }
        ans=min(ans,ops);
    }
    cout<<ans<<'\n';

    return 0;
}