#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 998244353
#define N 1000010
using namespace std;

ll n,k,x,c,ans,cnt[N],p[N],inv[N];

int main()
{
    inv[1]=1;
    FOR(i,2,N) inv[i]=1LL*(M-M/i)*inv[M%i]%M;
    cin>>n;
    FOR(i,0,n)
    {
        cin>>k;
        x=(inv[n]*inv[k])%M;
        FOR(i,0,k)
        {
            cin>>c; cnt[c]++;
            p[c]=(p[c]+x)%M;
        }
    }
    FOR(i,0,N) ans=(ans+((p[i]*cnt[i])%M*inv[n])%M)%M;
    cout<<ans<<'\n';
    return 0;
}