#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,x,y,d;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x>>y; d=y-x;
        cin>>x>>y;
        if(d%(x+y)==0) cout<<d/(x+y)<<'\n';
        else cout<<-1<<'\n';
    }
 
    return 0;
}