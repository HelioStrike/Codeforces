#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,k,x,y;
queue<int> q;
map<int,int> m;
stack<int> s;

int main()
{
    cin>>n>>k;
    FOR(i,0,n)
    {
        cin>>x;
        if(!m[x])
        {
            if(q.size()>=k)
            {
                y=q.front(); q.pop();
                m[y]=0;
            }
            q.push(x); m[x]=1;
        }
    }
    while(!q.empty()) s.push(q.front()),q.pop();
    cout<<s.size()<<'\n';
    while(!s.empty()) cout<<s.top()<<' ',s.pop();
    cout<<'\n';

    return 0;
}
