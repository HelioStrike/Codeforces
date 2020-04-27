#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define ll long long
#define N 100010
using namespace std;

int n,d;
ll h[N],hs[N];
pii dp[N],t[2*N];

void pull(int i)
{
    t[i]=max(t[i<<1],t[i<<1|1]);
}

void update(int i,pii v)
{
    for(t[i+=n]=v;i>1;i>>=1) pull(i>>1);
}

pii query(int a,int b)
{
    pii res={0,-1};
    for(a+=n,b+=n;a<b;a>>=1,b>>=1)
    {
        if(a&1) res=max(res,t[a++]);
        if(b&1) res=max(res,t[--b]);
    }
    return res;
}

int main()
{
    cin>>n>>d;
    FOR(i,0,n) cin>>h[i],update(i,{0,-1});
    copy(h,h+n,hs); sort(hs,hs+n);
    FOR(i,0,n)
    {
        dp[i]=max(query(0,upper_bound(hs,hs+n,h[i]-d)-hs),
                query(lower_bound(hs,hs+n,h[i]+d)-hs,n));
        dp[i].first++;
        update(lower_bound(hs,hs+n,h[i])-hs,{dp[i].first,i});
    }
    vector<int> ans;
    for(int i=query(0,n).second;i!=-1;i=dp[i].second) ans.push_back(i);
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(int x: ans) cout<<x+1<<' ';
    cout<<'\n';
    return 0;
}