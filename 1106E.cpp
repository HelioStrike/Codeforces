#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define ll long long
#define pb push_back
#define fs first
#define sd second
#define MAXN 100001
#define MAXK 201
using namespace std;

vector<pii> st[MAXN],et[MAXN];
ll dp[MAXN][MAXK];
multiset<pii> se;

int main()
{
    int n,m,k,s,t,d,c,w; pii p; cin >> n >> m >> k;
    FOR(i,0,k) { cin >> s >> t >> d >> w; st[s].pb(make_pair(-w,-d)),et[t].pb(make_pair(-w,-d)); } 

    for(int i=n; i>0;i--)
    {
        for(auto& e: et[i]) se.insert(e);
        p=make_pair(0,0); if(se.size()) p=*se.begin();
        FOR(j,0,m+1)
        {
            dp[i][j]=dp[p.fs?-p.sd+1:i+1][j]-p.fs;
            if(j) dp[i][j]=min(dp[i][j],dp[i+1][j-1]);
        }
        for(auto& e: st[i]) se.erase(se.lower_bound(e));
    }

    cout << dp[1][m] << '\n';

    return 0;
}