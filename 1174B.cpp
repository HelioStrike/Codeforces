#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,e,o,a[N];

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>a[i],o+=(a[i]%2==1),e+=(a[i]%2==0);
    if(!(o==n || e==n)) sort(a,a+n);
    FOR(i,0,n) cout<<a[i]<<' ';
    cout<<'\n';

    return 0;
}