#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll n,x,s,si,mi,ans;
map<ll,ll> m;

int main()
{
    cin>>n; ans=n*(n+1)/2;
    m[0]=1; mi=0;
    FOR(i,1,n+1)
    {
        cin>>x; s+=x;
        if(m[s]) mi=max(mi,m[s]);
        ans-=mi; m[s]=i+1;
    }
    cout<<ans<<'\n';
    return 0;
}