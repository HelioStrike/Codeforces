#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,c,a[N];

int main()
{
    cin>>n;
    c=1;
    FOR(i,2,n+1)
    {
        if(a[i]!=0) continue;
        a[i]=c;
        for(int j=2*i;j<=n;j+=i) a[j]=c;
        c++;
    }
    FOR(i,2,n+1) cout<<a[i]<<' ';
    cout<<'\n';

    return 0;
}