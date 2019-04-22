#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int c,k,x,l,a;
string s;
queue<char> q;

int main()
{
    cin>>s; l=s.length();
    FOR(i,0,l) c+=s[i]!='a';
    if(c%2) { cout<<":("<<'\n'; exit(0); }
    c/=2,k=c;
    for(x=0;x<l && k;x++)
    {
        if(s[x]!='a') k--,q.push(s[x]);
    }
    while(x<l && s[x]=='a') x++;
    a=x;
    for(;x<l;x++)
    {
        if(s[x]=='a') { cout<<":("<<'\n'; exit(0); }
        else
        {
            if(q.front()!=s[x]) { cout<<":("<<'\n'; exit(0); }
            else
            {
                q.pop();
            }
        }
    }
    cout<<s.substr(0,a)<<'\n';

    return 0;
}