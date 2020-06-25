#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,cnt,ans;
string s;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>s; cnt=ans=0;
        n=s.length();
        FOR(i,0,n)
        {
            if(s[i]=='+') cnt++;
            else cnt--;
            if(cnt<0) ans+=(i+1),cnt=0;
        }
        ans+=n;
        cout<<ans<<'\n';
    }
 
    return 0;
}