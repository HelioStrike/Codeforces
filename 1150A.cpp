#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

int n,m,r,c,p,minm=1e9,maxm;

int main()
{
    cin>>n>>m>>r;
    FOR(i,0,n) cin>>c,minm=min(minm,c);
    FOR(i,0,m) cin>>c,maxm=max(maxm,c);
    if(minm<maxm) r=r-minm*(r/minm)+maxm*(r/minm);
    cout<<r<<'\n';

    return 0;
}