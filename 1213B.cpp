#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define INF 1000010
#define N 150010
using namespace std;

int t,n,m,ans,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,n) cin>>a[i];
        m=INF,ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<m) m=a[i];
            else if(a[i]>m) ans++;
        }
        cout<<ans<<'\n';
    }

    return 0;
}

