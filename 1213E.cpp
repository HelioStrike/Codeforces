#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int main()
{
    int n;
    string c[6] = {"abc","cba","bca","acb","cab","bac"};
    string s,t;
    cin>>n>>s>>t;
    string ans[12];
    FOR(i,0,6) FOR(j,0,3) FOR(k,0,n) ans[i]+=c[i][j];
    FOR(i,6,12) FOR(k,0,n) ans[i]+=c[i-6];
    FOR(i,0,12)
    {
        if(ans[i].find(s)==-1 && ans[i].find(t)==-1)
        {
            cout<<"YES"<<'\n';
            cout<<ans[i]<<'\n';
            return 0;
        }
    }

    return 0;
}

