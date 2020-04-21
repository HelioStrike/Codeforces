#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int t,n,k,ans,a[N];
int v[2][2*N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; FOR(i,0,n) cin>>a[i]; ans=INT_MAX;
        memset(v[0],0,(2*k+2)*sizeof(int));
        memset(v[1],0,(2*k+2)*sizeof(int));
        FOR(i,0,n/2)
        {
            v[0][a[i]+a[n-i-1]]++;
            v[1][a[i]+a[n-i-1]]--;
            v[1][a[i]+a[n-i-1]+1]++;
            v[1][min(a[i],a[n-i-1])+1]++;
            v[1][max(a[i],a[n-i-1])+k+1]--;
        }
        FOR(i,2,2*k+1) v[1][i]=v[1][i]+v[1][i-1];
        FOR(i,2,2*k+1) ans=min(ans,n-2*v[1][i]-2*v[0][i]+v[1][i]);
        cout<<ans<<'\n';
    }

    return 0;
}