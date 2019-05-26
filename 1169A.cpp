#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,a,b,x,y,pos;

int main()
{
    cin>>n>>a>>x>>b>>y;
    a--,x--,b--,y--;
    FOR(i,0,n+1)
    {
        if(a==b) pos=1;
        else if(a==x) break;
        else if(b==y) break;
        a=(a+1)%n;
        b=(b-1+n)%n;
    }
    cout<<(pos?"YES":"NO")<<'\n';

    return 0;
}