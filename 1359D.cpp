#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,x,cur,psum,maxm,pmax,ans;

int main()
{
    cin>>n; maxm=INT_MIN;
    FOR(i,0,n)
    {
        cin>>x;
        cur+=x;
        if(x<0)
        {
            psum+=cur;
            pmax=max(pmax,maxm);
            maxm=INT_MIN;
            cur=0;
            if(psum<0)
            {
                psum=0;
                pmax=INT_MIN;
            }
            continue;
        }
        maxm=max(maxm,x);
        ans=max(ans,cur-maxm);
        if(pmax!=INT_MIN) ans=max(ans,cur-max(maxm,pmax)+psum);
    }
    cout<<ans<<'\n';
    return 0;
}