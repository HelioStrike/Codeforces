#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define MOD 1000000007
#define N 100010
using namespace std;

ll n,k,p[N],s[N],x,y,z,ans;

ll f(ll a) { return p[a]==a?a:p[a]=f(p[a]); }

ll pw(ll a,ll b)
{
    ll t=1;
    for(;b>0;a=(a*a)%MOD,b>>=1) if(b&1) t=(t*a)%MOD;
    return t;
}

int main()
{
    cin>>n>>k;
    FOR(i,1,n+1) p[i]=i,s[i]=1;
    FOR(i,1,n) 
    {
        cin>>x>>y>>z;
        if(!z) x=f(x),y=f(y),p[y]=x,s[x]+=s[y];
    }
    FOR(i,1,n+1) x=f(i),ans+=pw(s[x],k),s[x]=0;
    cout<<(pw(n,k)-ans%MOD+MOD)%MOD<<'\n';
}