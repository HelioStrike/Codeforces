#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 998244353
#define N 200010
using namespace std;

ll n,m,curc,curm,minm,pos,ans,a[N],b[N];
vector<ll> cnts;

int main()
{
    cin>>n>>m; curm=m-1; minm=INT_MAX; ans=1;
    FOR(i,0,n) scanf("%lld",&a[i]);
    FOR(i,0,m) scanf("%lld",&b[i]);
    for(int i=n-1;i>=0;i--)
    {
        minm=min(minm,a[i]);
        if(minm==b[curm]) pos=1;
        else if(minm<b[curm])
        {
            if(curm==0) pos=0;
            if(!pos) break;
            cnts.push_back(curc);          
            curc=0;
            curm--;
            pos=(minm==b[curm]);
        }
        if(pos) curc++;
    }
    if(!pos || curm!=0) ans=0;
    else
    {
        for(ll x: cnts) ans=(ans*x)%M;
    }
    cout<<ans<<'\n';
    return 0;
}