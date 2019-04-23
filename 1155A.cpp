#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,c;
string s;

int main()
{
    cin>>n>>s;
    FOR(i,0,n-1) if(s[i]>s[i+1]) { c=i+1; break; }
    if(c)
    {
        cout<<"YES"<<'\n';
        cout<<c<<' '<<c+1<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }

    return 0;
}