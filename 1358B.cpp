#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int t,n,x,ans,cnt,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,1,n+1) cin>>a[i];
        cnt=0; sort(a+1,a+n+1);
        for(int i=n;i>=1;i--)
        {
            if(a[i]<=i)
            {
                cnt=i;
                break;
            }
        }
        cout<<cnt+1<<'\n';
    }
    return 0;
}