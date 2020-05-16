#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int t,n,pre,x,cnt,a[N];
map<int,int> m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; pre=cnt=0; m.clear();
        FOR(i,0,n) cin>>x,m[x]++;
        for(auto p: m)
        {
            cnt+=(p.second+pre)/p.first;
            pre=(p.second+pre)%p.first;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}