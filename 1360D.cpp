#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,k,ans;

queue<ll> pq(ll x)
{
    queue<ll> v;
    for(ll i=2;i*i<=x;i++) while(x%i==0) v.push(i),x/=i;
    if(x>1) v.push(x);
    return v;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=LONG_LONG_MAX;
        for(ll i=1;i*i<=n;i++) 
        {
            if(n%i==0)
            {
                if(i<=k) ans=min(ans,n/i);
                if(n/i<=k) ans=min(ans,i);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}