#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 11
using namespace std;

int t,n,k,e[N];
string s[N],tar;

int calcerr(string a,string b)
{
    int ret=0;
    FOR(i,0,k) ret+=(a[i]!=b[i]);
    return ret;;
}

int main()
{
    cin>>t;
    while(t--)
    {
        memset(e,0,sizeof(e)); tar="";
        cin>>n>>k; FOR(i,0,n) cin>>s[i];
        int curer=0;
        FOR(i,1,n) 
        {
            e[i]=calcerr(s[0],s[i]);
            curer=max(curer,e[i]);
        }
        if(curer<2) tar=s[0];
        if(tar=="")
        {
            FOR(j,0,k)
            {
                FOR(i,1,n)
                {
                    if(s[0][j]!=s[i][j])
                    {
                        string cur=s[0];
                        cur[j]=s[i][j];
                        int cure=0;
                        FOR(l,1,n) cure=max(cure,calcerr(cur,s[l]));
                        if(cure<2)
                        {
                            tar=cur;
                            break;
                        }
                    }
                }
            }
        }
        if(tar!="") cout<<tar<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}