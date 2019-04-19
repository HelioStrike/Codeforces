#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 100010
using namespace std;

ll n,a[MAXN],ans;

int main()
{
    cin>>n;
    FOR(i,1,n+1)
    {
        cin>>a[i];
        ans+=a[i]*(n-a[i]+1);
    }
    FOR(i,2,n+1) ans-=min(a[i],a[i-1])*(n-max(a[i],a[i-1])+1);
    cout<<ans<<'\n';
    return 0;
}