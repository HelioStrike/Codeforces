#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 100010
#define K 11
using namespace std;

ll n,k,x,bit[N][K];

ll sum(ll p,ll j)
{
    ll ret=0;
    while(p>0)
    {
        ret+=bit[p][j];
        p-=p&(-p);
    }
    return ret;
}

void update(ll p,ll j,ll v)
{
    while(p<=n)
    {
        bit[p][j]+=v;
        p+=p&(-p);
    }
}

int main()
{
    cin>>n>>k;
    FOR(i,1,n+1)
    {
        cin>>x;
        update(x,1,1);
        FOR(j,2,k+2) update(x,j,sum(x-1,j-1));
    }
    cout<<sum(n,k+1)<<'\n';

    return 0;
}
