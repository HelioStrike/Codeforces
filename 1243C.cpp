#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll n,c,cur;
vector<ll> divs;

int main()
{
    cin>>n; 
    if(n==1) { cout<<1<<'\n'; return 0; }
    c=n;
    FOR(i,2,sqrt(c)+1)
    {
        if(c%i==0)
        {
            divs.push_back(i);
            while(c%i==0) c/=i;
        }
    }
    if(c>1) divs.push_back(c);
    if(divs.size()==1 && n==divs[0]) cout<<n<<'\n';
    else
    {
        cur=divs[0];
        for(ll x: divs) cur=__gcd(cur,x);
        cout<<cur<<'\n';
    }


    return 0;
}
