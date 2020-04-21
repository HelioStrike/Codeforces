#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

long long n,x,ans,last[2];
string s;

int main()
{
    cin>>n>>s; last[0]=last[1]=-1;
    FOR(i,0,n)
    {
        x=s[i]-'A';
        if(last[x]>=0)
        {
            ans+=last[x]+1;
            if(last[x^1]!=-1) ans-=last[x]>last[x^1];
        }
        last[x]=i;
    }
    cout<<ans<<'\n';
    return 0;
}