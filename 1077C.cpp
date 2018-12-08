#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    int n,k=0; ll tot=0; cin >> n;
    ll a[n],b[n],c[n]; FOR(i,0,n) cin >> a[i],tot+=(b[i]=a[i]);
    sort(b,b+n);
    FOR(i,0,n) if(tot-a[i]==2*b[a[i]==b[n-1]?n-2:n-1]) c[k++]=(i+1);
    cout << k << '\n';
    FOR(i,0,k) cout << c[i] << ' ';
    cout << '\n';

    return 0;
}