#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
#define M 1000000007
#define N 2010
using namespace std;

ll m,d,dp[N][N][2][2];
string a,b;

ll solve(int idx,int rem,int x,int c)
{
    if(idx==b.length()) return rem==0;
    if(dp[idx][rem][x][c]!=-1) return dp[idx][rem][x][c];
    ll g=0,h=9;
    if(!x) g=a[idx]-'0';
    if(!c) h=b[idx]-'0';
    ll a=0;
    FOR(i,g,h+1)
    {
        if(idx%2==0 && i==d) continue;
        if(idx%2==1 && i!=d) continue;
        a+=solve(idx+1,(rem*10+i)%m,x|(i>g),c|(i<h));
    }
    return dp[idx][rem][x][c]=a%M;
}

int main()
{
    cin>>m>>d>>a>>b;
    FOR(i,0,N)FOR(j,0,N)FOR(k,0,2)FOR(l,0,2) dp[i][j][k][l]=-1;
    cout<<solve(0,0,0,0)<<'\n';;

    return 0;
}