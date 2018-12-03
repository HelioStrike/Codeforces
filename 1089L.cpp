#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define MAXN 100010
#define ll long long
using namespace std;

int n,k,p[MAXN];
ll curr,tot;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) { return (a.first > b.first); }

int main()
{
    cin >> n >> k;
    vector<pair <ll, ll> > v(n);
    FOR(i,0,n) cin >> curr, v[i].second = curr; 
    FOR(i,0,n) cin >> curr, v[i].first = curr; 
    sort(v.begin(),v.end(),cmp);

    FOR(i,0,n)
    {
        if(p[v[i].second])
        {
            if(k<n) k++;
            else tot += v[i].first;
        }
        else p[v[i].second]=1;
    }
    cout << tot << '\n';

    return 0;
}