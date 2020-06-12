#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 110
using namespace std;

ll t,n,x,m,l,r,cl,cr,ans;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m; l=r=x;
        ans=1;
        FOR(i,0,m)
        {
            cin>>cl>>cr;
            if(cr<l || cl>r) continue;
            ans+=l-min(l,cl)+max(r,cr)-r;
            l=min(l,cl);
            r=max(r,cr);
        }
        cout<<ans<<'\n';
    }
    return 0;
}