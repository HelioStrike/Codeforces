#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
#define M 998244353
using namespace std;

ll n,k,ans,f[N];

ll poww(ll a,ll b)
{
    ll ret=1;
    while(b)
    {
        if(b&1) ret=(ret*a)%M;
        a=(a*a)%M,b>>=1;
    }
    return ret;
}

ll inv(int x)
{
    return poww(x,M-2);
}

ll comb(ll n,ll r)
{
    return ((f[n]*inv(f[r]))%M*inv(f[n-r]))%M;
}

int main()
{
    cin>>n>>k; f[0]=1;
    FOR(i,1,N) f[i]=(i*f[i-1])%M;
    if(k>=n) ans=0;
    else if(k==0) ans=f[n];
    else
    {
        ans=0;
        FOR(i,0,n-k+1)
        {
            ans=(ans+(i&1?-1:1)*(poww(n-k-i,n)*comb(n-k,i))+M)%M;
        }
        ans=(ans*comb(n,k)*2+M)%M;
    }
    cout<<ans<<'\n';
    return 0;
}