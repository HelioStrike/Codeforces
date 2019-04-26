#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,sel;
char a[10];
string s; 

int main()
{
    cin>>n>>s; FOR(i,1,10) cin>>a[i];
    FOR(i,0,n)
    {
        if(!sel && a[s[i]-'0']>s[i]) sel=1,s[i]=a[s[i]-'0'];
        else if(sel && a[s[i]-'0']>s[i]) s[i]=a[s[i]-'0'];
        else if(sel && a[s[i]-'0']<s[i]) break;
    }
    cout<<s<<'\n';

    return 0;
}