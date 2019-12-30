#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
using namespace std;

int n,m,x; long long cnt;
map<int,bool> vis;
pii p;
vector<int> ans;
queue<pii> q;

int main()
{
    cin>>n>>m;
    FOR(i,0,n) cin>>x,vis[x]=1,q.push({1,x-1}),q.push({1,x+1});
    while(m)
    {
        p=q.front(); q.pop(); x=p.second;
        if(!vis[x])
        {
            vis[x]=1; cnt+=p.first;
            ans.push_back(x);
            q.push({p.first+1,x-1});
            q.push({p.first+1,x+1});
            m--;
        }
    }
    cout<<cnt<<'\n';
    for(int i: ans) cout<<i<<' ';
    cout<<'\n';

    return 0;
}