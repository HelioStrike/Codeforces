#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,x,maxm,dist;
map<int,int> m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; m.clear(); maxm=dist=0;
        FOR(i,0,n) cin>>x,dist+=m[x]==0,m[x]++;
        for(auto p: m) maxm=max(maxm,p.second);
        cout<<max(min(dist-1,maxm),min(dist,maxm-1))<<'\n';
    }

    return 0;
}