#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll t,n,k,st,cur,ans,os,a[N],b[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; os=0;
        FOR(i,0,n) cin>>a[i];
        FOR(i,0,k) cin>>b[i],os+=b[i]==1;
        sort(a,a+n); 
        sort(b,b+k);
        st=b[os]-1; cur=os+1; ans=0;
        FOR(i,n-k,n) ans+=a[i];
        FOR(i,n-os,n) ans+=a[i];
        for(ll i=n-k-1;os!=k && i>=0;i--)
        {
            st--;
            if(st==0)
            {
                ans+=a[i];
                st=b[cur]-1;
                cur++;
            }
        }
        cout<<ans<<'\n';
    }
 
    return 0;
}