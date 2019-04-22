#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int c;
string s;

int main()
{
    cin>>s;
    FOR(i,0,s.length()) c+=s[i]=='a';
    cout<<min(2*c-1,(int)s.length())<<'\n';

    return 0;
}