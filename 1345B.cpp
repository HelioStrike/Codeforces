#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,cur,cnt;

ll comp_h(ll n)
{
    return (-1+sqrt(1+24*n))/6;
}

ll comp_n(ll h)
{
    return (3*h*h+h)/2;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; cnt=0;
        while(n>=2)
        {
            cur=comp_h(n);
            n-=comp_n(cur);
            cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}