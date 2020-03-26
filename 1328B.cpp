#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

long long t,n,k,x,y;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; k--;
        x=(-1+sqrt(1+8*k))/2;
        FOR(i,0,n-x-2) cout<<'a';
        cout<<'b';
        y=k-(x*(x+1))/2;
        FOR(i,0,x-y) cout<<'a';
        cout<<'b';
        FOR(i,0,y) cout<<'a';
        cout<<'\n';
    }
    return 0;
}