#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,a,b,c;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>=c) cout<<-1<<' ';
        else cout<<1<<' ';
        if(c<(a*b)) cout<<b;
        else cout<<-1;
        cout<<'\n';
    }
 
    return 0;
}