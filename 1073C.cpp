#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 200010
using namespace std;


int n,x,y,sx[MAXN],sy[MAXN];
string s;

int main()
{
    cin >> n; cin >> s; cin >> x >> y;
    if(abs(x)+abs(y)>n || (n+x+y)&1) { cout << -1 << '\n'; return 0;}
    FOR(i,1,n+1)
    {
        sx[i] = sx[i-1]+(s[i-1]=='L'?-1:(s[i-1]=='R'?1:0));
        sy[i] = sy[i-1]+(s[i-1]=='D'?-1:(s[i-1]=='U'?1:0));
    }
    
    int ans = 1000000000;
    for(int i=0,j=0; i<=n; i++)
    {
        while(j<=n && abs(sx[i]+sx[n]-sx[j]-x)+abs(sy[i]+sy[n]-sy[j]-y) > j-i) j++;
        if(j<=n) ans=min(ans,j-i);
        else break; 
    }

    cout << ans << '\n';

    return 0;
}