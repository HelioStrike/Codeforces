#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int e,n,c[2];
string t;

int main()
{
    cin>>e;
    while(e--)
    {
        cin>>t; n=t.length(); c[0]=c[1]=0;
        for(char x: t) c[x-'0']++;
        if(c[0]==0 || c[1]==0) cout<<t;
        else FOR(i,0,n) cout<<"10";
        cout<<'\n';
    }
    return 0;
}