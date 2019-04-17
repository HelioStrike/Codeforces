#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int a[4],b;

int main()
{
    FOR(i,0,4) cin>>a[i];
    sort(a,a+4);
    b=a[0]+a[1]-a[3];
    cout<<b<<' '<<a[0]-b<<' '<<a[1]-b<<'\n';
}