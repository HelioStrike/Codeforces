#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

int t,n,pos,a[N],b[N],c[N],np[N],pp[N];
stack<int> pq;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; while(!pq.empty()) pq.pop();
        FOR(i,1,n+1) cin>>a[i],b[a[i]]=i,c[i]=1,np[i]=i+1,pp[i]=i-1,pq.push(1);
        pos=1;
        FOR(i,1,n+1)
        {
            if(c[b[i]]==pq.top())
            {
                pq.pop();
                int nxp=np[b[i]];
                int pxp=pp[b[i]];
                np[pxp]=nxp;
                pp[nxp]=pxp;
                if(nxp<=n) {
                    c[nxp]++;
                    pq.push(c[nxp]); 
                }
            }
            else
            {
                pos=0;
                break;
            }
        }
        cout<<(pos?"Yes":"No")<<'\n';
    }

    return 0;
}