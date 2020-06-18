#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,x,y,n,cnt;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n; cnt=0;
        while(x<=n && y<=n)
        {
            if(x>y) swap(x,y);
            x+=y;
            cnt++;
        }
        cout<<cnt<<'\n';
    }
 
    return 0;
}