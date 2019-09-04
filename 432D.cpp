#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 100010
using namespace std;

int n,k,j,p[N],dp[N],id[N];
string s;

int main()
{
    cin>>s; n=s.length();
    FOR(i,1,n)
    {
        for(j=p[i];j&&s[i]!=s[j];j=p[j]);
        p[i+1]=s[i]==s[j]?j+1:0;
    }
    for(int i=n;i>=0;i--) dp[i]++,dp[p[i]]+=dp[i];
    id[0]=n;
    for(int i=p[n];i;i=p[i]) id[++k]=i;
    cout<<(k+1)<<'\n';
    for(int i=k;i>=0;i--) cout<<id[i]<<' '<<dp[id[i]]<<'\n';

    return 0;
}