#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,nc,t,c,a;

int main()
{
    cin>>t;
    FOR(e,0,t)
    {
        cin>>n; nc=n,c=1,a=1; while(nc>>=1) a|=(1<<c),c++;
        if(n!=(1<<c)-1) cout<<((1<<c)-1)<<'\n';
        else
        {
            a=1;
            FOR(i,2,sqrt(n)+1) if(n%i==0) { a=n/i; break; }
            cout<<a<<'\n';
        } 
    }

    return 0;
}