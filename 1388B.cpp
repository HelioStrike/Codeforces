#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,fin;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; fin=n;
        if(n%4!=0) fin--;
        fin-=(n/4);
        FOR(i,0,fin) cout<<9;
        if(n%4!=0) cout<<8;
        FOR(i,0,n/4) cout<<8;
        cout<<'\n';
    }

    return 0;
}