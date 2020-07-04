#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pii pair<int,int>
#define N 1010
using namespace std;

int t,n,cur,a[N];
map<int,int> m,mp;
vector<int> ans;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; ans.clear();
        FOR(i,0,n) cin>>a[i];
        while(1)
        {
            m.clear();
            mp.clear();
            FOR(i,0,n) m[a[i]]++,mp[a[i]]=i+1;
            cur=-1;

            FOR(i,0,n)
            {
                if(!m[i])
                {
                    cur=i;
                    break;
                }
            }
            if(cur==-1) FOR(i,1,n) if(a[i]<a[i-1]) cur=n;
            if(cur==-1) break;

            if(cur==n) 
            {
                FOR(i,0,n)
                {
                    if(mp[i] && mp[i]-1!=i)
                    {
                        cur=mp[i]-1;
                        a[mp[i]-1]=n;
                        break;
                    }
                }
            }
            else a[cur]=cur;
            ans.push_back(cur+1);
        }
        cout<<ans.size()<<'\n';
        for(int x: ans) cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}