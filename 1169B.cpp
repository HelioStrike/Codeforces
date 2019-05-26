#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 300010
using namespace std;

int m,n,x,y,a[N][2],curr,piked;
map<int,int> mp;

int main()
{
    cin>>m>>n;
    FOR(i,0,n) cin>>a[i][0]>>a[i][1];

    FOR(i,0,2)
    {
        curr=a[0][i]; piked=0; mp.clear();
        FOR(i,0,n)
        {
            if(a[i][0]!=curr && a[i][1]!=curr)
            {
                mp[a[i][0]]++,mp[a[i][1]]++;
            } else piked++;
        }
        if(piked==n){ cout<<"YES"<<'\n'; exit(0); }
        for(pair<int,int> p: mp)
        {
            if(p.second+piked==n) { cout<<"YES"<<'\n'; exit(0); }
        }
    }
    cout<<"NO"<<'\n';

    return 0;
}