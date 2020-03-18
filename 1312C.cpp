#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 101
using namespace std;

ll t,n,k,x,cur,maxm;

int main()
{
    cin>>t;
    while(t--)
    {
        priority_queue<ll> pq;
        cin>>n>>k; FOR(i,0,n) cin>>x,pq.push(x),maxm=max(maxm,x);
        cur=1; while(cur<maxm) {cur*=k;}
        while(!pq.empty() && cur!=0)
        {
            x=pq.top(); pq.pop();
            if(x>=cur) x-=cur;
            pq.push(x);
            cur/=k;
        }
        cout<<((pq.top()==0)?"YES":"NO")<<'\n';
    }

    return 0;
}