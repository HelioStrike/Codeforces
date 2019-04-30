#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 55
using namespace std;

int n,c,fl;
string s[N];

int chekpos[5][2]={{0,0},{1,0},{2,0},{1,-1},{1,1}};

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>s[i];

    FOR(i,0,n)
    {
        FOR(j,0,n)
        {
            if(s[i][j]=='.')
            {
                fl=1;
                FOR(k,0,5)
                {
                    if(!(i+chekpos[k][0]<n && j+chekpos[k][1]<n && j+chekpos[k][1]>=0 && s[i+chekpos[k][0]][j+chekpos[k][1]]=='.')) { fl=0; break; }
                }
                if(fl) FOR(k,0,5) s[i+chekpos[k][0]][j+chekpos[k][1]]='#';
            }
        }
    }

    FOR(i,0,n) FOR(j,0,n) c+=s[i][j]=='#';
    cout<<(c==n*n?"YES":"NO")<<'\n';

    return 0;
}