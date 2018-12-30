#include <bits/stdc++.h>
#define ll long long
#define MOD 998244353
using namespace std;


int main()
{
    ll n; cin >> n;
    string s; cin >> s;

    ll x,y,z=s.length()-1;
    for(x=0; s[x]==s[x+1]; x++) {}
    if(x==z) { cout << ((n*(n+1))/2)%MOD << '\n'; exit(0);}
    for(y=z; s[y]==s[y-1]; y--) {}
    y=z-y;
    cout << (s[0]==s[z]?(x+2)*(y+2)%MOD:(x+y+3)) << '\n';

    return 0;
}