#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll n,k,c,ans=LONG_MAX;

ll numdiv(ll n, ll k) 
{ 
    ll tot=0; 
    while(n) tot+=n/k,n/=k; 
    return tot;
}

int main()
{
    cin >> n >> k;

    FOR(i,2,sqrt(k)+1)
    {
        if(k%i) continue;
        c=0;
        while(k%i==0) k/=i,c++;
        ans=min(ans,numdiv(n,i)/c); 
    }

    if(k>1) ans=min(ans,numdiv(n,k)); 
    cout << ans << '\n';

    return 0;
}