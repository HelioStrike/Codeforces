#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,k,x,ans;
map<ll,ll> m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; m.clear(); ans=0;
        FOR(i,0,n)
        {
            cin>>x;
            if(x%k==0) continue;
            m[k*ceil(x*1.0/k)-x]++;
        }
        for(auto p: m)
        {
            ans=max(ans,1+(p.second-1)*k+p.first);
        }
        cout<<ans<<'\n';
    }
 
    return 0;
}