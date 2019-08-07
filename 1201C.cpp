#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    ll n,k; cin>>n>>k;
    ll a[n+1]; FOR(i,0,n) cin>>a[i];    
    sort(a,a+n); a[n]=INT_MAX;

    ll med=a[n/2],curr=n/2,wid=1;
    while(curr<=n)
    {
        if(k<wid) break;
        med+=min(k/wid,a[curr+1]-a[curr]);
        k-=min((a[curr+1]-a[curr])*wid,k);
        wid++,curr++;
    }
    cout<<med<<'\n';

    return 0;
}
