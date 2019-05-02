#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define pii pair<int,int>
#define fi first
#define se second
#define ll long long
#define N 300010
using namespace std;

ll n,k,sum,minm,ans;
pii ps[N];
multiset<int> s; 

int main()
{
    cin>>n>>k; FOR(i,0,n) cin>>ps[i].se>>ps[i].fi;
    sort(ps,ps+n,greater<>());

    minm=INT_MAX;
    FOR(i,0,n)
    {
        if(s.size()==k) sum-=*s.begin(),s.erase(s.begin());
        minm=ps[i].fi;
        sum+=ps[i].se;
        s.insert(ps[i].se);
        ans=max(ans,sum*minm);
    }
    cout<<ans<<'\n';

    return 0;
}