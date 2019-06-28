#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define M 1000000007
using namespace std;

ll n,k,d[33000][4][226],t[16],g[16];

ll f(int mask,int gen, int ti)
{
    if(ti>k) return 0;
    if(ti==k) return 1;
    if(d[mask][gen][ti]!=-1) return d[mask][gen][ti];
    ll res=0;
    FOR(i,0,n)
    {
        if(!(mask&(1<<i)) && g[i]!=gen) res=(res+f(mask|(1<<i),g[i],ti+t[i]))%M; 
    }
    return d[mask][gen][ti]=res;
}

int main()
{
    memset(d,-1,sizeof(d));
    cin>>n>>k; FOR(i,0,n) cin>>t[i]>>g[i];
    cout<<f(0,0,0)<<'\n';

    return 0;
}
