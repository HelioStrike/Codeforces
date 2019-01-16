#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MOD 998244353
using namespace std;

int main()
{
    map<int,int> m;
    int n,curr; cin>>n; int a[n]; FOR(i,0,n) { cin>>a[i]; m[a[i]]=i;}
    ll tot=1; curr=0;
    FOR(i,0,n)
    {
        if(i>curr) tot=(tot*2)%MOD;
        curr=max(curr,m[a[i]]);
    }
    cout << tot << '\n';

    return 0;
}