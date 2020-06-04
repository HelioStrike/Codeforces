#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll unsigned long long
using namespace std;

ll t,n,c,cur,ans;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; ans=0; c=1; cur=1;
        while(c<=n)
        {
            ans+=cur*(1+(n-c)/(2*c));
            c*=2; cur++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}