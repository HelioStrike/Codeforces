#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 200010
using namespace std;

int t,n,x,y; ll ans;
vector<int> s[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; ans=0; FOR(i,0,n+1) s[i].clear();
        FOR(i,0,n) cin>>x>>y,s[x].push_back(y);
        priority_queue<int,vector<int>,greater<int> >q;
        for(int i=n;i>=1;i--)
        {
            if(!s[i].empty())
            {
                for(int p: s[i]) q.push(p);
                while(i>n-q.size()) ans+=q.top(),q.pop();
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
