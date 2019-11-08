#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 110
using namespace std;

int q,n,a[N],swp[N];

int main()
{
    cin>>q;
    while(q--)
    {
        cin>>n; FOR(i,0,n) cin>>a[i];
        memset(swp,0,sizeof(swp));
        for(int i=n-2;i>=0;i--)
        {
            FOR(j,i,n-1)
            {
                if(a[j]>a[j+1] && !swp[j])
                {
                    swap(a[j],a[j+1]);
                    swp[j]=1;
                }
            }
        }
        FOR(i,0,n) cout<<a[i]<<' ';
        cout<<'\n';
    }

    return 0;
}
