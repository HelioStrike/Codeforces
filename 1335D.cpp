#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t;
int x[9]={0,3,6,1,4,7,2,5,8};
int y[9]={0,1,2,3,4,5,6,7,8};
char m[9][9];

int main()
{
    cin>>t; getchar();
    while(t--)
    {
        FOR(i,0,9) { FOR(j,0,9) m[i][j]=getchar(); getchar(); }
        FOR(i,0,9) m[x[i]][y[i]]='0'+(m[x[i]][y[i]]-'0')%9+1;
        FOR(i,0,9) { FOR(j,0,9) cout<<m[i][j]; cout<<'\n'; }
    }

    return 0;
}