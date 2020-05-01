#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,ans;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; ans=1<<(n+1);
        FOR(i,1,n/2) ans+=1<<i;
        FOR(i,n/2,n+1) ans-=1<<i;
        cout<<abs(ans)<<'\n';
    }
    return 0;
}