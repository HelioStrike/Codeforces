#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int t,n,c,ans;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s; c=ans=0;
        FOR(i,0,n)
        {
            if(s[i]=='(') c++;
            else c--;
            if(c<0) ans=max(ans,-c);
        }
        cout<<ans<<'\n';
    }
 
    return 0;
}