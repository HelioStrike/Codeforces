#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n;
pair<int,int> d[N];
vector<int> v[N];

int main()
{
    cin>>n;
    FOR(i,1,n+1) cin>>d[i].first,d[i].second=i;
    sort(d+1,d+n+1); reverse(d+1,d+n+1);
    FOR(i,1,n+1) v[i].push_back(2*d[i].second);
    FOR(i,1,n+1) v[i+d[i].first].push_back(2*d[i].second-1);
    FOR(i,2,N) for(int j: v[i]) cout<<j<<' '<<v[i-1][0]<<'\n';;
    cout<<'\n';

    return 0;
}