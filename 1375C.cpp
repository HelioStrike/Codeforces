#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pii pair<int,int>
#define N 200010
using namespace std;

int t,n,x;
stack<pii> s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; while(!s.empty()) s.pop();
        FOR(i,0,n)
        {
            cin>>x;
            if(s.empty()) s.push({x,x});
            else
            {
                if(s.top().second>x)
                {
                    while(s.top().first<x) s.pop();
                    s.push({x,s.top().second});
                }
                else
                {
                    while(s.size()>1) s.pop();
                }
            }
        }
        cout<<(s.size()==1?"YES":"NO")<<'\n';
    }
 
    return 0;
}