#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 55
using namespace std;

int r,c,a[N][N],m[N][N];
vector<pair<int,int> > ans;

int main()
{
    cin>>r>>c;
    FOR(i,0,r) FOR(j,0,c) cin>>a[i][j];
    FOR(i,0,r-1) FOR(j,0,c-1) if(a[i][j] && a[i+1][j] && a[i][j+1] && a[i+1][j+1]) m[i][j]=m[i+1][j]=m[i][j+1]=m[i+1][j+1]=1,ans.push_back({i+1,j+1});
    FOR(i,0,r) FOR(j,0,c) if(a[i][j] && !m[i][j]) { cout<<-1<<'\n'; return 0; }
    cout<<ans.size()<<'\n';
    for(pair<int,int> p: ans) cout<<p.first<<' '<<p.second<<'\n';

    return 0;
}