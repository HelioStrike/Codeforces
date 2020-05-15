#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int x,y,f[10][10];
double dp[10][10];

int main()
{
    FOR(i,0,10) FOR(j,0,10) cin>>f[i][j];
    FOR(i,0,10)
    {
        for(int j=i&1?9:0;j<10 && j>=0;j+=i&1?-1:1)
        {
            if(i==0 && j<7) {
                if(j) dp[i][j]=6.0;
            }
            else FOR(k,1,7)
            {
                x=i,y=j;
                y+=(i&1?1:-1)*k;
                if(y>9) x--,y=19-y;
                else if(y<0) x--,y=-y-1;
                dp[i][j]+=(1+min(dp[x][y],dp[x-f[x][y]][y]))/6;
            }
        }
    }
	printf("%.10f\n", dp[9][0]);
    return 0;
}