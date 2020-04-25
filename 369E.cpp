#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define N 1000010
using namespace std;

int n,q,l,r,x,y,t[N],ans[N];
vector<pii> qq[N];
vector<int> p[N];

int get(int idx)
{
    int ret=0;
    for(;idx;idx-=idx&-idx) ret+=t[idx];
    return ret;
}

void add(int idx)
{
    for(;idx<N;idx+=idx&-idx) t[idx]++;
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n>>q;
    FOR(i,0,n)
    {
        cin>>l>>r;
        p[r].pb(l);
    }
    FOR(i,0,q)
    {
        cin>>x; l=0;
        FOR(j,0,x)
        {
            cin>>y;
            qq[y-1].pb({l,i});
            l=y;
        }
        qq[N-1].pb({l,i});
    }
    FOR(i,1,N)
    {
        for(int e: p[i]) add(e);
        for(auto e: qq[i]) ans[e.se]+=get(i)-get(e.fi);
    }
    FOR(i,0,q) cout<<n-ans[i]<<'\n';
    return 0;
}