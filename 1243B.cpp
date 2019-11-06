#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int tc,n,m,a[4],cnt;
string s,t;

int main()
{
    cin>>tc;
    while(tc--)
    {
        cin>>n>>s>>t; cnt=m=0;
        FOR(i,0,n)
        {
            if(cnt>2) break;
            if(s[i]!=t[i])
            {
                cnt++;
                a[m++]=s[i];
                a[m++]=t[i];
            }
        }
        if(cnt!=2) cout<<"No"<<'\n';
        else
        {
            if(a[0]==a[2] && a[1]==a[3]) cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
        }
    }

    return 0;
}
