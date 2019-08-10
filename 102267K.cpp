#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

long long sum=0,a[21],n;

void rec(int v,int d)
{
    if(d==n) { sum+=v; return; }
    rec(v,d+1);
    rec(v|a[d],d+1);
}

int main()
{
    cin>>n; for(int i=0;i<n;i++) cin>>a[i];
    rec(0,0);
    cout<<sum<<'\n';

    return 0;
}
