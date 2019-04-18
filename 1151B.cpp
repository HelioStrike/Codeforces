#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 505
using namespace std;

int n,m,c;
map<int,int> a[MAXN];
vector<int> ans;

void rec(int r,int cur)
{
    if(r==n+1)
    {
        cout<<"TAK"<<'\n';
        FOR(i,0,ans.size()) cout<<ans[i]<<' ';
        cout<<'\n';
        exit(0);
    }
    for(pair<int,int> p: a[r])
    {
        if(cur!=p.first)
        {
            ans.push_back(p.second);
            rec(r+1,cur^p.first);
            ans.pop_back();
        }
    }
}

int main()
{
    cin>>n>>m;
    FOR(i,1,n+1) FOR(j,1,m+1) cin>>c,a[i][c]=j;
    rec(1,0);
    cout<<"NIE"<<'\n';

    return 0;
}