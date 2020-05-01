#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 110
using namespace std;

int t,n,k,a[N];
map<int,int> seen;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; seen.clear();
        FOR(i,0,n) cin>>a[i],seen[a[i]]=1;
        if(seen.size()>k) cout<<-1<<'\n';
        else 
        {
            cout<<n*k<<'\n';
            FOR(i,0,n) 
            {
                for(auto p: seen) cout<<p.first<<' ';
                FOR(j,0,k-(int)seen.size()) cout<<1<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}