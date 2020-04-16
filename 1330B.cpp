#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int t,n,cnt,minm,maxm,a[N],l[N];
vector<pair<int,int> > ans;
map<int,int> m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,n) cin>>a[i];
        ans.clear();
        memset(l,0,sizeof(l));
        cnt=0,minm=INT_MAX,maxm=0; m.clear();
        FOR(i,0,n)
        {
            if(m[a[i]]) break;
            minm=min(minm,a[i]);
            maxm=max(maxm,a[i]);
            cnt++; m[a[i]]=1;
            if(minm==1 && maxm==cnt) l[i]=1;
        }
        cnt=0,minm=INT_MAX,maxm=0; m.clear();
        for(int i=n-1;i>=0;i--)
        {
            if(m[a[i]]) break;
            minm=min(minm,a[i]);
            maxm=max(maxm,a[i]);
            cnt++; m[a[i]]=1;
            if(minm==1 && maxm==cnt && i>0 && l[i-1]) ans.push_back({i,n-i});
        }
        cout<<ans.size()<<'\n';
        reverse(ans.begin(),ans.end());
        for(auto p: ans) cout<<p.first<<' '<<p.second<<'\n';
    }
    return 0;
}