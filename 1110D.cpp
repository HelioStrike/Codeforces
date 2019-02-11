#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 1000010
using namespace std;

int arr[MAXN],dp[MAXN][7][7];

int main()
{
    int n,m,curr; cin >> n >> m;
    FOR(i,0,n) { cin >> curr; arr[curr]++; } 
    FOR(i,1,m+1)
    {
        FOR(j,0,3)
        {
            FOR(k,0,3)
            {
                FOR(l,0,3)
                {
                    curr=arr[i]-j-k-l;
                    if(curr>=0) dp[i][j][k]=max(dp[i][j][k],dp[i-1][l][j]+k+curr/3);
                }   
            }
        }
    }
    cout << dp[m][0][0] << '\n';

    return 0;
}