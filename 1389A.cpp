#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,l,r;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(r<2*l) cout<<-1<<' '<<-1<<'\n';
        else cout<<l<<' '<<2*l<<'\n';
    }

    return 0;
}