#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define lb lower_bound
#define ub upper_bound
#define b begin
#define e end
using namespace std;

int n,q,x,y,t;
vector<int> v[26];
string s;

int main()
{
    cin>>n>>q>>s;
    FOR(i,0,s.length()) v[s[i]-'a'].push_back(i);
    FOR(e,0,q)
    {
        cin>>x>>y>>t; x--,y--;
        if(t==1)
        {
            int cur=x;
            FOR(i,0,26)
            {
                int st=lb(v[i].b(),v[i].e(),x)-v[i].b();
                int en=ub(v[i].b(),v[i].e(),y)-v[i].b();
                FOR(j,st,en) v[i][j]=cur,cur++;
            }
        }
        else
        {
            int cur=x;
            for(int i=25;i>=0;i--)
            {
                int st=lb(v[i].b(),v[i].e(),x)-v[i].b();
                int en=ub(v[i].b(),v[i].e(),y)-v[i].b();
                FOR(j,st,en) v[i][j]=cur,cur++;
            }
        }
    }
    FOR(i,0,26) FOR(j,0,v[i].size()) s[v[i][j]]='a'+i;
    cout<<s<<'\n';
    return 0;
}