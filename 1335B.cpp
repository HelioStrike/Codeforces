#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,a,b,cur;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b; s=""; cur=0;
        FOR(i,0,n)
        {
            s+='a'+cur;
            cur++;
            if(cur==b) cur=0;
        }
        cout<<s<<'\n';
    }
    return 0;
}