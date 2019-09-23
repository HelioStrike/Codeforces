#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

int n,k,i;
string s;

int main()
{
    cin>>n>>k>>s;
    if(n==1) 
    { 
        if(k>0) cout<<0<<'\n';
        else cout<<s<<'\n';
        return 0; 
    }
    if(k>0 && s[0]>'1') s[0]='1',k--;
    i=1; 
    while(i<n && k>0)
    {
        if(s[i]!='0') s[i]='0',k--;
        i++;
    }
    cout<<s<<'\n';

    return 0;
}
