#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 10000010
using namespace std;

int n,x,y,id[MAXN],a[2];
ll k[2],ans=1e18;

void f(ll p,int a1,int a2)
{
    if(ans>p) ans=p,a[0]=a1,a[1]=a2;
}

int main()
{
    cin>>n;
    FOR(i,1,n+1)
    {
        cin>>x;
        if(id[x]) f(x,id[x],i);
        id[x]=i;
    }
    FOR(i,1,MAXN-1)
    {
        y=0;
        for(int j=i;j<MAXN;j+=i)
        {
            if(id[j]) k[y++]=j;
            if(y==2)
            {
                f(1ll*k[0]*k[1]/i,id[k[0]],id[k[1]]);
                break;
            }
        }
    }
    if(a[0]>a[1]) swap(a[0],a[1]);
    cout<<a[0]<<' '<<a[1]<<'\n';

    return 0;
}