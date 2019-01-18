#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 100010
using namespace std;

pair<int,int> seg[MAXN];
int ans[MAXN];

bool cmp(const pair<int,int>& a, const pair<int,int>& b) { return (a.first < b.first);}

int main()
{
    int t,n,x,k; cin>>t;
    while(t--)
    {
        cin>>n; FOR(i,0,n) { cin>>seg[i].first>>seg[i].second; ans[i]=seg[i].second;}
        sort(seg,seg+n,cmp);
        for(x=seg[0].second,k=1;k<n;k++)
        {
            if(seg[k].first>x) break;
            x=max(x,seg[k].second);
        }
        if(k==n) cout<<"-1"<<'\n';
        else { FOR(i,0,n) cout<<((ans[i]<=x)?1:2)<<' '; cout<<'\n';}

    }

    return 0;
}