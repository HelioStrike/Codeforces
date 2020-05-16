#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,k,minm;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        while(--k>0)
        {
            ll minm=10;
            ll maxm=0;
            ll c=n;
            while(c)
            {
                minm=min(minm,c%10);
                maxm=max(maxm,c%10);
                c/=10;
            }
            if(minm==0) break;
            n+=minm*maxm;
        }
        cout<<n<<'\n';
    }
    return 0;
}