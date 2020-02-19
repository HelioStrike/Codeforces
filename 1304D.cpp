#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,p;
string s,k;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s; k=s; s=k+'>'; p=-1;
        FOR(i,0,n) if(s[i]=='>') { 
            FOR(j,n-i,n-p) cout<<j<<' ';
            p=i;
        } cout<<'\n';
        s=k+'<'; p=0;
        FOR(i,0,n) if(s[i]=='<') {
            for(int j=i+1;j>p;j--) cout<<j<<' ';
            p=i+1;
        } cout<<'\n';
    }

    return 0;
}