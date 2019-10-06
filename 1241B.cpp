#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int q,pos;
map<int,int> m1,m2;
string s,t;

int main()
{
    cin>>q;
    while(q--)
    {
        cin>>s>>t; m1.clear(); m2.clear();
        if(s.length()!=t.length()) { cout<<"NO"<<'\n'; continue; }
        FOR(i,0,s.length()) m1[s[i]]++;
        FOR(i,0,t.length()) m2[t[i]]++;
        pos=0;
        for(auto p: m1)
        {
            if(m2[p.first])
            {
                pos=1;
                break;
            }
        }
        cout<<(pos?"YES":"NO")<<'\n';
    }

    return 0;
}
