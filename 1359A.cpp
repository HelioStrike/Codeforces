#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,m,k,c;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        c=min(n/k,m);
        if(k>1) c-=ceil((m-c)*1.0/(k-1));
        cout<<c<<'\n';
    }
    return 0;
}