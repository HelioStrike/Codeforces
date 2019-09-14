#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 110
using namespace std;

int n,c,a[N],v[N];

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i];
    sort(a,a+n);
    FOR(i,0,n)
    {
        if(v[i]) continue;
        c++;
        FOR(j,i,n) if(a[j]%a[i]==0) v[j]=1;
    }
    cout<<c<<'\n';

    return 0;
}