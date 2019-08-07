#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    ll n,sum=0,maxm=0; cin>>n;
    ll a[n]; FOR(i,0,n) cin>>a[i],sum+=a[i],maxm=max(maxm,a[i]);    
    if(sum%2) { cout<<"NO"<<'\n'; return 0; }
    if(2*maxm<=sum) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}
