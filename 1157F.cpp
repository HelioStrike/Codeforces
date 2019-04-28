#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll n,st,ans,anst,a[N]; 

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i];
    sort(a,a+n); ans=1;
    FOR(i,1,n)
    {
        if(i>1 && a[i-2]<a[i]-1) st=i-1;
        if(a[i-1]<a[i]-1) st=i;
        if(i-st+1>ans) ans=i-st+1,anst=st;
    }
    cout<<ans<<'\n';
    for(int i=anst;i<anst+ans;i+=2) cout<<a[i]<<' ';
    for(int i=anst+ans-1-ans%2;i>anst;i-=2) cout<<a[i]<<' ';
    cout<<'\n';

    return 0;
}