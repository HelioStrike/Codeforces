#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,sum,cur,ans;
vector<ll> v;

int main()
{
    cin>>t;
    sum=1,cur=2;
    while(sum<=1e9)
    {
        sum+=cur;
        cur<<=1;
        v.push_back(sum);
    }
    while(t--)
    {
        cin>>n;
        for(ll x: v)
        {
            if(n%x==0)
            {
                ans=n/x;
                break;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}