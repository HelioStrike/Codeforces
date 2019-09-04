#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 10010
using namespace std;

int n,a[N];

int main()
{
    cin>>n;
    FOR(i,0,2*n) cin>>a[i];
    sort(a,a+2*n);
    int sum=0;
    FOR(i,0,n) sum+=a[i];
    int sum2=0;
    FOR(i,n,2*n) sum2+=a[i];
    if(sum==sum2) cout<<"-1"<<'\n';
    else
    {
        FOR(i,0,2*n) cout<<a[i]<<' ';
        cout<<'\n';
    }

    return 0;
}