#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int n,z,a[N],l,r,ans;

int main()
{
    cin>>n>>z; FOR(i,0,n) cin>>a[i];
    sort(a,a+n);
    l=0,r=n/2+n%2;
    while(r<n)
    {
        if(a[r]-a[l]>=z) ans++,r++,l++;
        else r++;
    }
    cout<<ans<<'\n';

    return 0;
}