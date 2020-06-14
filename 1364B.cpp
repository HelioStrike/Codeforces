#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 100010
using namespace std;

ll t,n,x,y;
vector<int> v;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; v.clear();
        cin>>x>>y; v.push_back(x); v.push_back(y);
        FOR(i,2,n)
        {
            cin>>x;
            ll l=*(--v.end());
            ll l2=*(--(--v.end()));
            if((x-l)*(l-l2)>=0) v.pop_back();
            v.push_back(x);
        }
        cout<<v.size()<<'\n';
        for(int x: v) cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}