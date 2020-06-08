#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 510
using namespace std;

int t,n,a[N],b[N];
map<pair<int,int>,int > mq;
bool pos;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; mq.clear(); pos=1;
        FOR(i,0,n) cin>>a[i];
        FOR(i,0,n) cin>>b[i];
        if(n%2 && (a[n/2]!=b[n/2])) { cout<<"No"<<'\n'; continue; }
        FOR(i,0,n/2) mq[{a[i],a[n-i-1]}]++,mq[{a[n-i-1],a[i]}]++;
        FOR(i,0,n/2)
        {
            if(!mq[{b[i],b[n-i-1]}]) { pos=0; break; }
            mq[{b[i],b[n-i-1]}]--; mq[{b[n-i-1],b[i]}]--;
        }
        cout<<(pos?"Yes":"No")<<'\n';
    }
    return 0;
}