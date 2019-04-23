#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int n,m;
ll c,k,s,p,t;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a; }

int main()
{
    cin>>n>>m;
    cin>>c>>p; s=c; k=p-c;
    FOR(i,2,n) cin>>c,k=gcd(k,c-p),p=c;

    FOR(i,1,m+1) 
    {
        cin>>c;
        if(k%c==0) { t=i; break; }
    }

    if(t)
    {
        cout<<"YES"<<'\n';
        cout<<s<<' '<<t<<'\n';
    }
    else cout<<"NO"<<'\n';

    return 0;
}