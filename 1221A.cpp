#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,a,b,x,yee;
map<int,int> m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; yee=0; m.clear();
        FOR(i,0,n) cin>>x,m[x]++;
        for(auto p: m)
        {
            if(p.first>2048) break;
            if(p.first==2048) { yee=1; break; }
            if(p.second>1) { m[p.first*2]+=p.second/2; }
        }
        cout<<(yee?"YES":"NO")<<'\n';
    }

    return 0;
}
