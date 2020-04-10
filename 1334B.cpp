#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,k,s,ans,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; ans=s=0;
        FOR(i,0,n) cin>>a[i],s+=a[i];
        if(s/n>=k) ans=n;
        if(!ans)
        {
            sort(a,a+n);
            FOR(i,0,n-1)
            {
                s-=a[i];
                if(s/(n-i-1)>=k) { ans=n-i-1; break; }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}