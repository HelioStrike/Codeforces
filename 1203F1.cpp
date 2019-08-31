#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define fi first
#define se second
#define N 30010
using namespace std;

int n,r,a,b;
vector<pii> pos,neg;

bool cmp1(pii a,pii b) { return a.fi<b.fi; }
bool cmp2(pii a,pii b) { return max(a.fi,-a.se)+a.se>max(b.fi,-b.se)+b.se; }

int nuu() { cout<<"NO"<<'\n'; exit(0); }

int main()
{
    cin>>n>>r;
    FOR(i,0,n)
    {
        cin>>a>>b;
        if(b>=0) pos.push_back({a,b});
        else neg.push_back({a,b});
    }
    sort(pos.begin(),pos.end(),cmp1);
    sort(neg.begin(),neg.end(),cmp2);

    for(pii p: pos)
    {
        if(p.fi<=r) r+=p.se;
        else nuu();
    }
    for(pii p: neg)
    {
        if(p.fi<=r) r+=p.se;
        else nuu();
    }
    cout<<"YES"<<'\n';

    return 0;
}

