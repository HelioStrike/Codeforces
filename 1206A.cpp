#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int main()
{
    map<int,int> m;
    int x; cin>>x;
    int a[x]; FOR(i,0,x) cin>>a[i],m[a[i]]=1;
    int y; cin>>y;
    int b[y]; FOR(i,0,y) cin>>b[i],m[b[i]]=1;

    FOR(i,0,x)
    {
        FOR(j,0,y)
        {
            if(m[a[i]+b[j]]==0)
            {
                cout<<a[i]<<' '<<b[j]<<'\n';
                return 0;
            }
        }
    }

    return 0;
}
