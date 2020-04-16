#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,m,c,a[N];
long long sum;

int main()
{
    cin>>n>>m; 
    FOR(i,0,m) cin>>a[i],sum+=a[i];
    if(sum<n)
    {
        cout<<-1<<'\n';
        exit(0);
    }
    FOR(i,0,m) if(a[i]+i>n) {
        cout<<-1<<'\n';
        exit(0);
    }
    FOR(i,0,m)
    {
        c++;
        for(;n-c+1>sum;c++);
        cout<<c<<' ';
        sum-=a[i];
    }
    cout<<'\n';
    return 0;
}