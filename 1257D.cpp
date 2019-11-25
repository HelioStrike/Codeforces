#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int t,n,q,p,s,ans,a[N],dp[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,n) cin>>a[i]; cin>>q;
        memset(dp,0,sizeof(dp));
        FOR(i,0,q)
        {
            cin>>p>>s;
            dp[s]=max(dp[s],p);
        }
        for(int i=n-1;i>=1;i--) dp[i]=max(dp[i],dp[i+1]);
        p=0,ans=0;
        while(p!=n)
        {
            int k=0,h=0;
            while(p+k<n && max(h,a[p+k])<=dp[k+1]) h=max(h,a[p+k]),k++;
            if(!k)
            {
                ans=-1;
                break;
            }
            else p+=k,ans++;
        }
        cout<<ans<<'\n';
    }

    return 0;
}