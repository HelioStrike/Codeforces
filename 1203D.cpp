#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int c,ans,p[N];
string s,t;

int main()
{
    cin>>s>>t;
    for(int i=0;i<s.length() && c<t.length();i++) if(t[c]==s[i]) p[c++]=i;
    ans=s.length()-1-p[t.length()-1]; c=s.length()-1;
    for(int i=t.length()-1;i>=0 && c>=0;i--)
    {
        while(t[i]!=s[c]) c--;
        if(i==0) ans=max(ans,c);
        else ans=max(ans,c-p[i-1]-1); c--;
    }
    cout<<ans<<'\n';

    return 0;
}
