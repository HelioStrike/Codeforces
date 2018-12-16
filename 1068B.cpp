#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    ll n, tot=0; cin >> n;
    double k=sqrt(n);
    for(ll i=1; i<=(int)k; i++) if(!(n%i)) tot++;
    cout << (2*tot-(k==(int)k)) << '\n';
}