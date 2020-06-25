#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll t,n,ans,tot,cur,a[N];
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; tot=0;
        FOR(i,0,n) 
        {
            cin>>a[i];
            if(i%2==0) tot+=a[i];
        }
        ans=tot;
        cur=0;
        for(int i=0;i<n;i+=2)
        {
            if(i+1<n) cur+=a[i+1]-a[i];
            if(cur<0) 
            {
                cur=0;
                continue;
            }
            ans=max(ans,tot+cur);
        }
        cur=0;
        for(int i=1;i<n;i+=2)
        {
            if(i+1<n) cur+=a[i]-a[i+1];
            if(cur<0) 
            {
                cur=0;
                continue;
            }
            ans=max(ans,tot+cur);
        }
        cout<<ans<<'\n';
    }
 
    return 0;
}