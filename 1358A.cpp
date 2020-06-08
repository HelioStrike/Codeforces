#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,a,b,ans;

ll ret(ll n,ll m)
{
    ll ret=(a*(b/2));
    if(b%2) ret+=(a+1)/2;
    return ret;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<min(ret(a,b),ret(b,a))<<'\n';
    }
    return 0;
}