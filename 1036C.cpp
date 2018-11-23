#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll o[1000005],L,R; int T,len;
void dfs(int i, int j, ll sum)
{   
    if(i == 18) { o[++len]=sum; return;}
    dfs(i+1,j,sum*10);
    if(j < 3) FOR(k,1,10) dfs(i+1, j+1, sum*10+k);
}

int main()
{
    dfs(0,0,0); o[++len]=1e18; scanf("%d", &T);
    cout << '\n';
    while(T--)
    {
        scanf("%lli%lli", &L, &R);
        printf("%lli\n", upper_bound(o+1, o+len+1, R) - lower_bound(o+1, o+len+1, L));
    }
    return 0;
}