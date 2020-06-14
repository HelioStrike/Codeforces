#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,x,y,cur,a[N];
bool pos;
map<ll,bool> m;
set<ll> s;

int main()
{
    cin>>n>>a[0]; m[a[0]]=1; s.insert(a[0]); pos=1; cur=-1;
    FOR(i,1,n) 
    {
        cin>>a[i]; m[a[i]]=1;
        if(a[i]<a[i-1]) pos=0;
        s.insert(a[i]);
    }
    if(!pos)
    {
        cout<<-1<<'\n';
        exit(0);
    }
    FOR(i,0,n)
    {
        if(!s.empty() && a[i]!=*s.begin())
        {
            cout<<(*s.begin())<<' ';
            s.erase(s.begin());
        }
        else 
        {
            cur++;
            while(m[cur]) cur++;
            cout<<cur<<' ';
        }
    }
    cout<<'\n';
    return 0;
}