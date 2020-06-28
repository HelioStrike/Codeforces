#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,x,y,c,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        c=(n/x)*x;
        c+=y;
        if(c>n) c-=x;
        cout<<c<<'\n';
    }
 
    return 0;
}