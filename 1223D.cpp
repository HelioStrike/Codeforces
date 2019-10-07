#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 300010
using namespace std;

int q,n,x,tot,ans,cur,lasted,st[N],ed[N];

int main()
{
    cin>>q;
    while(q--)
    {
        cin>>n;
        FOR(i,1,n+1) st[i]=ed[i]=0;
        FOR(i,1,n+1)
        {
            cin>>x;
            if(!st[x]) st[x]=i;
            ed[x]=i;
        }
        tot=ans=cur=lasted=0;
        FOR(i,1,n+1)
        {
            if(!st[i]) continue;
            tot++;
            if(st[i]>lasted)
            {
                cur++;
                ans=max(ans,cur);
            } else cur=1;
            lasted=ed[i];
        }
        cout<<tot-ans<<'\n';
    }

    return 0;
}
