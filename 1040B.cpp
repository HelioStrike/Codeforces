#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int sz = (2*k+1);
    cout << (ceil(n*1.0/sz)) << '\n';
    int s = (n-1)%sz;
    for(int i = max(1, s-k+1); i <= n; i+=sz) cout << i << " ";
    cout << '\n';
}