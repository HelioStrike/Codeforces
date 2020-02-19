#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,m;
string s,t,o;
vector<string> pr;
map<string,int> mp;

int main()
{
    cin>>n>>m; o="";
    FOR(i,0,n)
    {
        cin>>s; t=s;
        reverse(t.begin(),t.end());
        if(!mp[t]) mp[s]++;
        else mp[t]++;
    }
    for(pair<string,int> p: mp)
    {
        if(o=="" && p.second==1) { t=p.first; reverse(t.begin(),t.end()); if(t==p.first) o=p.first; }
        else if(p.second==2) pr.push_back(p.first);
    }
    s="";
    for(string k: pr) s+=k;
    if(o!="") s+=o;
    reverse(pr.begin(),pr.end());
    for(string k: pr) { reverse(k.begin(),k.end()); s+=k; }
    cout<<s.length()<<'\n';
    cout<<s<<'\n';
    return 0;
}