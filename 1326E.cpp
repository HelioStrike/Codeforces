#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 300010
#define lt (t<<1)
#define rt ((t<<1)+1)
using namespace std;

int n,cur,x[N],y[N],z[N],a[4*N],b[4*N];

void add(int p,int v,int tl,int tr,int t)
{
    if(tl==tr)
    {
        a[t]+=v;
        return;
    }
    int tm=(tl+tr)/2;
    if(p<=tm) add(p,v,tl,tm,lt);
    else add(p,v,tm+1,tr,rt);
    a[t]=a[lt]+a[rt];
    b[t]=max(b[lt]+a[rt],b[rt]);
}

int main()
{
    cin>>n;
    FOR(i,1,n+1) cin>>x[i],y[x[i]]=i;
    FOR(i,1,n+1) cin>>z[i];
    cur=n;
    add(y[n],1,1,n,1);
    FOR(i,1,n)
    {
        cout<<cur<<' ';
        add(z[i],-1,1,n,1);
        while(max(a[1],b[1])==0)
        {
            cur--;
            add(y[cur],1,1,n,1);
        }
    } cout<<cur<<'\n';
    return 0;
}