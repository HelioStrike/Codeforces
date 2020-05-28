#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 998244353
#define N 500010
using namespace std;

ll n,k,ans,inv[N],c[N];

int main()
{
    inv[1]=1;
    FOR(i,2,N) inv[i]=1LL*(M-M/i)*inv[M%i]%M;
    cin>>n>>k; ans=0;
    c[k-1]=1;
    FOR(i,0,n-k+1) c[k+i]=(((c[k+i-1]*(k+i))%M)*inv[i+1])%M;
    if(n==k)
    {
        cout<<1<<'\n';
        exit(0);
    }
    else if(n<k)
    {
        cout<<0<<'\n';
        exit(0);
    }
    FOR(i,1,n+1)
    {
        if(n/i>=k)
        {
            ans=(ans+c[n/i-1])%M;
        }
    }
    cout<<ans<<'\n';
    return 0;
}