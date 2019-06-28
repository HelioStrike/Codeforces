#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 1010
using namespace std;

int n,x,y,d[N];
vector<pair<int,int> > a,b;

int f(int n) { return n==d[n]?n:d[n]=f(d[n]); }

int main()
{
    cin>>n; FOR(i,1,n+1) d[i]=i;
    FOR(i,1,n) 
    { 
        cin>>x>>y; 
        if(f(x)!=f(y)) d[f(x)]=f(y);
        else a.push_back({x,y});
    }

    FOR(i,1,n+1) FOR(j,i+1,n+1) if(f(i)!=f(j)) b.push_back({i,j}),d[f(i)]=f(j); 
    
    cout<<a.size()<<'\n';
    FOR(i,0,a.size()) cout<<a[i].first<<' '<<a[i].second<<' '<<b[i].first<<' '<<b[i].second<<'\n';

    return 0;
}
