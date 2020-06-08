#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int n,x,ans;
map<int,int> a,b,c;

int main()
{
    cin>>n;
    FOR(i,0,n)
    {
        cin>>x;
        a[x]=i;
    }
    FOR(i,0,n)
    {
        cin>>x;
        b[x]=i;
    }
    FOR(i,1,n+1)
    {
        c[(b[i]+n-a[i])%n]++;
        ans=max(ans,c[(b[i]+n-a[i])%n]);
    }
    cout<<ans<<'\n';
    return 0;
}