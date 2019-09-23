#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 10
#define M 100
using namespace std;

int n,m,x,y,cur,minm,tot,masks[N];

int main()
{
    cin>>n>>m;
    FOR(i,0,m) cin>>x>>y,masks[x]|=(1<<y),masks[y]|=(1<<x);
    if(n<7) { cout<<m<<'\n'; return 0; }
    minm=M;
    FOR(i,1,n+1)
    {
        FOR(j,i+1,n+1)
        {
            cur=masks[i]&masks[j]; tot=0;
            while(cur) tot+=(cur&1),cur>>=1;
            minm=min(minm,tot);
        }
    }
    cout<<m-minm<<'\n';

    return 0;
}
