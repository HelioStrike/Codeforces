#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int main()
{
    int n,k,q,i; cin>>n>>k;
    n=1<<n;
    cout<<((n>>(k<n))-1)<<'\n'; q=i=0;
    while(++i<n) if(i<(i^k)) cout<<(i^q)<<' ',q=i;
    cout<<'\n';

    return 0;
}