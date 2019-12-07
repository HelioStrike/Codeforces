#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,imp;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s; n=s.length(); imp=0;
        FOR(i,0,n)
        {
            if(s[i]=='?')
            {
                if(i==0) s[i]='a';
                else s[i]=(s[i-1]-'a'+1)%3+'a';
                if(i!=n-1 && s[i]==s[i+1])
                {
                    s[i]=(s[i]-'a'+1)%3+'a';
                    if(i!=0 && s[i]==s[i-1]) s[i]=(s[i]-'a'+1)%3+'a';
                }
                if(i!=0 && s[i]==s[i-1])
                {
                    s[i]=(s[i]-'a'+1)%3+'a';
                    if(i!=n-1 && s[i]==s[i+1]) s[i]=(s[i]-'a'+1)%3+'a';
                }
            }
        }
        FOR(i,1,n) if(s[i]==s[i-1]) { imp=1; break; }
        if(imp) cout<<-1<<'\n';
        else cout<<s<<'\n';
    }

    return 0;
}