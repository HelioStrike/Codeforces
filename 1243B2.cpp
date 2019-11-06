#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int tc,n,m,a,b,imp;
char tmp;
map<char,priority_queue<int,vector<int>,greater<int> > > vs,vt;
vector<pair<int,int> > v;
string s,t;

int main()
{
    cin>>tc;
    while(tc--)
    {
        cin>>n>>s>>t; v.clear(),vs.clear(),vt.clear(); imp=0;
        FOR(i,0,n)
        {
            vs[s[i]].push(i);
            vt[t[i]].push(i);
        }
        FOR(i,0,n)
        {
            if(s[i]!=t[i])
            {
                if(vs[s[i]].empty()) { /*cout<<"hi1"<<' '<<s<<' '<<t<<' '<<i<<'\n';*/ imp=1; break; }
                vs[s[i]].pop();
                if(vt[s[i]].empty() && vs[s[i]].empty()) { /*cout<<"hi2"<<' '<<s<<' '<<t<<' '<<i<<'\n';*/ imp=1; break; }
                if(!vs[s[i]].empty())
                {
                    //cout<<"hi1"<<' '<<i<<'\n';
                    //cout<<s<<' '<<t<<'\n';
                    a=vs[s[i]].top(); vs[s[i]].pop(); vs[t[i]].push(a); vt[t[i]].pop();
                    //swap(s[a],t[i]);
                    tmp=s[a]; s[a]=t[i]; t[i]=tmp;
                    v.push_back({a+1,i+1});
                    //cout<<a<<' '<<i<<'\n';
                    //cout<<s<<' '<<t<<'\n';
                }
                else if(!vt[s[i]].empty() && i!=n-1)
                {
                    //cout<<"hi2"<<' '<<i<<'\n';
                    //cout<<s<<' '<<t<<'\n';
                    a=i+1; vs[s[a]].pop();
                    b=vt[s[i]].top(); vt[t[b]].pop(); vs[t[b]].push(a); vt[s[a]].push(b);
                    //swap(s[a],t[b]);
                    tmp=s[a]; s[a]=t[b]; t[b]=tmp;
                    v.push_back({a+1,b+1});

                    a=i+1; vs[s[a]].pop();
                    b=i; vt[t[b]].pop(); vs[t[b]].push(a);
                    //swap(s[a],t[b]);
                    tmp=s[a]; s[a]=t[b]; t[b]=tmp;
                    v.push_back({a+1,b+1});
                    //cout<<s<<' '<<t<<'\n';
                }
                else { /*cout<<"hi3"<<' '<<vt[s[i]].empty()<<' '<<!vs[s[i]].empty()<<' '<<s<<' '<<t<<' '<<i<<'\n';*/ imp=1; break; }
            }
            else vs[s[i]].pop(),vt[s[i]].pop();
        }
        if(imp) cout<<"No"<<'\n';
        else
        {
            cout<<"Yes"<<'\n';
            cout<<v.size()<<'\n';
            for(auto p: v) cout<<p.first<<' '<<p.second<<'\n';
        }
    }

    return 0;
}
