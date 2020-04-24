#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int t,n,k,ans,ansi,a[N],b[N];

bool isPeak(int i)
{
    if(i==1 || i==n) return false;
    return ((a[i]>a[i-1])&&(a[i]>a[i+1]));
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; FOR(i,1,n+1) cin>>a[i];
        ans=ansi=0;
        FOR(i,1,n+1)
        {
            b[i]=b[i-1]+isPeak(i);
            if(i>=k && b[i]-b[i-k]-isPeak(i)-isPeak(i-k+1)>ans)
            {
                ans=b[i]-b[i-k]-isPeak(i)-isPeak(i-k+1);
                ansi=i-k;
            }
        }
        cout<<ans+1<<' '<<ansi+1<<'\n';
    }

    return 0;
}