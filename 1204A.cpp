#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;


int main()
{
    string s; int l; cin>>s; l=s.length();
    if(l%2==0) cout<<l/2<<'\n';
    else
    {
        int n=0;
        FOR(i,1,s.length())
        {
            n+=s[i]=='1';
        }
        if(n==0) cout<<l/2<<'\n';
        else cout<<l/2+1<<'\n';
    }

    return 0;
}
