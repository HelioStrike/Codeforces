#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll unsigned long long
#define M 1000000007
using namespace std;

ll x,n,p,nx,ans,cur,curk;
vector<ll> pf;

ll mpow(ll a,ll b)
{
    ll ret=1; a=a%M;
    while(b)
    {
        if(b&1) ret=(ret*a)%M;
        a=(a*a)%M; b>>=1;
    }
    return ret;
}

int main()
{
    cin>>x>>n;
    FOR(i,2,sqrt(x)+1)
    {
        if(x%i==0)
        {
            while(x%i==0) x/=i;
            pf.push_back(i);
        }
    }
    if(x>1) pf.push_back(x);
    ans=1;
    for(ll i: pf)
    {
        cur=1,nx=i,curk=n;
        //cout<<(cur%10)<<' '<<(i%10)<<' '<<(nx%10)<<'\n';
        while(curk>=i) { cur=nx,nx=nx*i,curk/=i; }
        p=0;
        while(cur!=1)
        {
            ans=(ans*mpow(cur,n/cur-p))%M;
            p=n/cur; cur/=i;
        }
    }
    cout<<ans<<'\n';

    return 0;
}
