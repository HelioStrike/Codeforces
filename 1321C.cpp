#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n;
string s;

int main()
{
    cin>>n>>s; s="#"+s+"#";
    for(int i='z';i>='a';i--)
    {
        FOR(j,0,s.size())
        {
            if(s[j]==i && (s[j+1]==i-1 || s[j-1]==i-1)) s.erase(s.begin()+j),j=0;
        }
    }
    cout<<n-s.length()+2<<'\n';

    return 0;
}