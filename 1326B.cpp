#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

long long n,m,a[N];

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i]; m=a[0];
    cout<<a[0]<<' ';
    FOR(i,1,n)
    {
        a[i]+=m;
        m=max(m,a[i]);
        cout<<a[i]<<' ';
    } cout<<'\n';
    return 0;
}