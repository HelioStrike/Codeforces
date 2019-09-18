#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int mn;
string s;

int main()
{
    cin>>s; mn='z';
    FOR(i,0,s.length())
    {
        mn=min(mn,(int)s[i]);
        if(mn==s[i]) cout<<"Mike"<<'\n';
        else cout<<"Ann"<<'\n';
    }

    return 0;
}