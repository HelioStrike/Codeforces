#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int q,sl,tl,pl,nop;
string s,t,p;

int main()
{
    cin>>q; 
    while(q--)
    {
        cin>>s>>t>>p;
        sl=s.length(),tl=t.length(),pl=p.length();
        if(sl>tl) { cout<<"NO"<<'\n'; continue; }
        int cs[26]; memset(cs,0,sizeof(cs)); FOR(i,0,pl) cs[p[i]-'a']++;

        int sc=0,tc=0; nop=0;
        while(sc<sl)
        {
            if(tc==tl) { nop=1; break; }
            if(s[sc]!=t[tc])
            {
                if(!cs[t[tc]-'a']) { nop=1; break; }
                cs[t[tc]-'a']--;
                tc++;
            }
            else sc++,tc++;
        }

        while(tc<tl)
        {
            if(!cs[t[tc]-'a']) { nop=1; break; }
            cs[t[tc]-'a']--;
            tc++;
        }

        if(nop) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }

    return 0;
}
