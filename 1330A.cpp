#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 201
using namespace std;

int t,n,x,v,a[N];

int main()
{
    cin>>t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        cin>>n>>x; FOR(i,0,n) cin>>v,a[v]=1;
        FOR(i,1,N)
        {
            if(!a[i]) 
            {
                if(!x) break;
                x--;
            }
            v=i;
        }
        cout<<v<<'\n';
    }
    return 0;
}