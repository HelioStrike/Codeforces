#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll q,n,a,b,c,d,e,p1,p2,t,ps[N];

bool cmp(ll a,ll b) { return a>b; }

int main()
{
    cin>>q;
    while(q--)
    {
        cin>>n; FOR(i,1,n+1) cin>>ps[i];
        sort(ps+1,ps+1+n);
        FOR(i,2,n+1) ps[i]+=ps[i-1];
        cin>>p1>>a>>p2>>b>>t;
        c=0,d=-1; e=a*b/__gcd(a,b);
        FOR(i,1,n+1)
        {
            c=max(((ps[n]-ps[n-i/e])/((ll)100))*(p1+p2)+((ps[n-i/e]-ps[n-(i/e)-(i/a-i/e)])/((ll)100))*p1+((ps[n-(i/e)-(i/a-i/e)]-ps[n-(i/e)-(i/a-i/e)-(i/b-i/e)])/((ll)100))*p2,
            ((ps[n]-ps[n-i/e])/((ll)100))*(p1+p2)+((ps[n-i/e]-ps[n-(i/e)-(i/b-i/e)])/((ll)100))*p2+((ps[n-(i/e)-(i/b-i/e)]-ps[n-(i/e)-(i/b-i/e)-(i/a-i/e)])/((ll)100))*p1); 
            //cout<<c<<'\n';
            if(c>=t) { d=i; break; }
        }
        cout<<d<<'\n';
    }

    return 0;
}
