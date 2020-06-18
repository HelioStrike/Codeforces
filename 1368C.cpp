#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll n,cnt;
vector<pair<int,int> > v;

int main()
{
    cin>>n;
    v.push_back({0,0});
    v.push_back({0,1});
    FOR(i,0,n)
    {
        FOR(j,0,3) v.push_back({i+1,i+j});
    }
    v.push_back({n+1,n});
    v.push_back({n+1,n+1});
    cout<<v.size()<<'\n';
    for(auto p: v) cout<<p.first<<' '<<p.second<<'\n';
    return 0;
}