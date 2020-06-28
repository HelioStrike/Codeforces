#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,k,x,a,b,ans,imp;
priority_queue<ll, vector<ll>, std::greater<ll> > pq[4];

int main()
{
    cin>>n>>k;
    FOR(i,0,n)
    {
        cin>>x>>a>>b;
        if(a&b) pq[3].push(x);
        else if(a) pq[1].push(x);
        else if(b) pq[2].push(x);
    }
    FOR(i,0,k)
    {
        ll cur=-1;
        if(pq[3].empty() && !pq[2].empty() && !pq[1].empty()) 
        {
            cur=pq[1].top()+pq[2].top();
            pq[1].pop(); pq[2].pop();
        }
        else if((pq[2].empty() || pq[1].empty()) && !pq[3].empty()) cur=pq[3].top(),pq[3].pop();
        else if(!pq[3].empty() && !pq[2].empty() && !pq[1].empty())
        {
            if(pq[3].top()<= pq[2].top()+pq[1].top())
            {
                cur=pq[3].top(),pq[3].pop();
            }
            else
            {
                cur=pq[1].top()+pq[2].top();
                pq[1].pop(); pq[2].pop();
            }
        }
        if(cur==-1)
        {
            imp=1;
            break;
        }
        ans+=cur;
    }
    cout<<(imp?-1:ans)<<'\n';
    return 0;
}