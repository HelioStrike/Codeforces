#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define pb push_back
#define MAXN 5010
using namespace std;

vector<int> v[MAXN];

int main()
{
    int n,k,tmp=0; cin >> n >> k;
    int a[n],b[n]; FOR(i,0,n) { cin >> a[i]; v[a[i]].pb(i);}
    FOR(i,1,MAXN)
    {
        if(v[i].size()>k) { cout << "NO" << '\n'; exit(0);}
        for(auto c:v[i])
        {
            b[c]=tmp+1; tmp++;
            tmp%=k;
        }
    }
    cout << "YES" << '\n';
    FOR(i,0,n) cout << b[i] << " ";
    cout << '\n';

    return 0;
}