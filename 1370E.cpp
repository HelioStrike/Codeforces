#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pii pair<int,int>
#define N 200010
using namespace std;

int n,cs[2],ct[2],cm,ans0,ans1;
string s,t;

int main()
{
    cin>>n; cin>>s>>t;
    FOR(i,0,n)
    {
        cs[s[i]-'0']++;
        ct[t[i]-'0']++;
    }
    if(cs[0]!=ct[0] || cs[1]!=ct[1])
    {
        cout<<-1<<'\n';
        exit(0);
    }
    FOR(i,0,n)
    {
        if(s[i]=='0' && t[i]=='1') cm++;
        else if(s[i]=='1' && t[i]=='0') cm--;
        if(cm>0) ans0=max(ans0,cm);
        else ans1=max(ans1,-cm);
    }
    cout<<ans0+ans1<<'\n';
    return 0;
}