#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
#define M (int)(1e8+10)
using namespace std;

struct domi {int x,h,i;};

int n,x,h,ans[N];
domi d[N];
stack<int> s;

bool cmp(domi a,domi b) { return a.x<b.x; }

int main()
{
    cin>>n; 
    FOR(i,0,n) 
    {
        cin>>x>>h;
        d[i]={x,h,i};
    }
    sort(d,d+n,cmp);
    for(int i=n-1;i>=0;i--)
    {
        ans[d[i].i]=1;
        while(!s.empty() && d[i].x+d[i].h>d[s.top()].x)
        {
            ans[d[i].i]+=ans[d[s.top()].i];
            s.pop();
        }
        s.push(i);
    }
    FOR(i,0,n) cout<<ans[i]<<' ';
    cout<<'\n';
    return 0;
}