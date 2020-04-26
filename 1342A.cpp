#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,x,y,a,b,ans,cur;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b; ans=0;
        if(x<0 && y<0) x=-x,y=-y;
        if(b<2*a && (x>0 && y>0))
        {
            cur=min(x,y);
            x-=cur,y-=cur;
            ans+=b*cur;
        }
        ans+=abs(x)*a;
        ans+=abs(y)*a;
        cout<<ans<<'\n';
    }
    return 0;
}