#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,a,b,p,q,l,r,cl,cr;

ll get(ll x)
{
    x++;
    if(x<max(a,b)) return 0;
    ll cur=(x/p)*(p-max(a,b));
    ll cur2=x%p; 
    if(cur2>=max(a,b)) cur2-=max(a,b);
    else cur2=0;
    return cur+cur2;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        p=(a*b)/__gcd(a,b);
        FOR(i,0,q)
        {
            cin>>l>>r; l--;
            if(p==0) cout<<0<<' ';
            else
            {
                cout<<get(r)-get(l)<<' ';        
            }
            cout<<'\n';
        }
    }
    return 0;
}