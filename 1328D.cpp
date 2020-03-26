#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int t,n,c,pos,a[N],cs[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; c=0; pos=0;
        memset(cs,0,sizeof(cs));
        FOR(i,0,n) cin>>a[i];
        c=cs[0]=1;
        FOR(i,1,n)
        {
            if(a[i]==a[i-1]) cs[i]=cs[i-1],pos=i;
            else c=2,cs[i]=3-cs[i-1];
        }
        if(cs[n-1]==cs[0] && a[n-1]!=a[0])
        {
            if(pos)
            {
                FOR(i,pos,n) cs[i]=3-cs[i];
            }
            else c=3,cs[n-1]=3;   
        }
        cout<<c<<'\n';
        FOR(i,0,n) cout<<cs[i]<<' '; cout<<'\n';
    }
    return 0;
}