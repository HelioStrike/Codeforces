#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;


int main()
{
    ll n,t,s,d,k,minm=1e9,ans; cin>>n>>t;
    FOR(i,0,n)
    {
        cin>>s>>d; 
        k=s+d*max((ll)0,(ll)ceil((t-s)*1.0f/d));
        if(k==t) { ans=i; break; }
        if(k<minm) minm=k,ans=i;
    }
    cout<<++ans<<'\n';

    return 0;
}