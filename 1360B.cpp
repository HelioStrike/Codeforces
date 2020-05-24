#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 51
using namespace std;

ll t,n,ans,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,n) cin>>a[i];
        sort(a,a+n); ans=INT_MAX;
        ans=a[1]-a[0];
        FOR(i,2,n) ans=min(ans,a[i]-a[i-1]);
        cout<<ans<<'\n';
    }
    return 0;
}