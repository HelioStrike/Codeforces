#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int main()
{
    int t,h,w; cin>>t;
    while(t--)
    {
        cin>>h>>w;
        FOR(i,0,h)
        {
            FOR(j,0,w) cout<<(i==0&&j==0?'W':'B');
            cout<<'\n';
        }
    }
}