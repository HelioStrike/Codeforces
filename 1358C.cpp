#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

ll t,x1,x2,yy1,yy2,x,y;

ll solve(ll x,ll y)
{
    x-=min(x,y);
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x1>>yy1>>x2>>yy2;
        x=x2-x1,y=yy2-yy1;
        cout<<solve(x,y)<<'\n';
    }
    return 0;
}