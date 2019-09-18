#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n;
string s;
map<int,int> m;

int main()
{
    cin>>n>>s;
    FOR(i,0,n) m[s[i]]++;
    FOR(i,0,m['n']) cout<<1<<' ';
    FOR(i,0,m['o']-m['n']) cout<<0<<' ';
    cout<<'\n';

    return 0;
}