#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MOD 998244353
#define MAXN 1010
#define MAXK 2010
using namespace std;

ll A[MAXN][MAXK]; //Bicolorings ending with same colored pair
ll B[MAXN][MAXK]; //Bicolorings ending with different colored pair

int main()
{
    int n, k; cin >> n >> k;

    A[1][1] = 2; B[1][2] = 2;
    FOR(i,2,n+1)
    {
        FOR(j,1,2*i+1)
        {
            A[i][j] = (A[i-1][j] + A[i-1][j-1] + 2*B[i-1][j])%MOD;
            B[i][j] = (2*A[i-1][j-1] + B[i-1][j] + B[i-1][j-2])%MOD;
        }
    }

    cout << (A[n][k]+B[n][k]) << '\n';
}