#include <bits/stdc++.h>
using namespace std;

int t,n,m,a[200010],i,j;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++) cin>>a[i];
        for(i=j=1;i+m<=n;i++) if(a[i+m]-a[i]<a[j+m]-a[j]) j=i;
        cout<<(a[j]+a[j+m])/2<<'\n';
    }
}