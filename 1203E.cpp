#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,c,w=0,a[N];

int main()
{
    cin>>n; FOR(i,0,n) cin>>a[i];
    sort(a,a+n);
    FOR(i,0,n)
    {
        if(a[i]-1>w) w=a[i]-1,c++;
        else if(a[i]>w) w=a[i],c++;
        else if(a[i]+1>w) w=a[i]+1,c++;
    }
    cout<<c<<'\n';

    return 0;
}

