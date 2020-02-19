#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,m,l,h,pt,nt,nl,nh,imp;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m; l=h=m; pt=0; imp=0;
        FOR(i,0,n)
        {
            cin>>nt>>nl>>nh;
            l-=(nt-pt); h+=(nt-pt);
            if(h<nl || l>nh) imp=1;
            h=min(h,nh); l=max(l,nl); pt=nt;
        }
        cout<<(imp?"NO":"YES")<<'\n';
    }

    return 0;
}