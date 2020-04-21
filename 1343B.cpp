#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        cout<<"YES"<<'\n';
        n/=2;
        FOR(i,1,n+1) cout<<2*i<<' ';
        FOR(i,1,n/2+1) cout<<2*i-1<<' ';
        FOR(i,n/2+1,n+1) cout<<2*i+1<<' ';
        cout<<'\n';
    }

    return 0;
}