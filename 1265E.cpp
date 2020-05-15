#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 998244353
#define N 1000010
using namespace std;

ll n,x,p,ans,a[N],inv[N];

int main()
{
    inv[1]=1;
    FOR(i,2,N) inv[i]=1LL*(M-M/i)*inv[M%i]%M;
    cin>>n; p=1;
    FOR(i,0,n) cin>>x,a[i]=inv[x];
    for(int i=n-1;i>=0;i--)
    {
        p=(p*100)%M;
        p=(p*a[i])%M;
        ans=(ans+p)%M;
    }
    cout<<ans<<'\n';
    return 0;
}