#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

const int maxi = 100;
int c[maxi+1];

int main()
{
    int n; cin >> n; 
    int a[n]; FOR(i,0,n) cin >> a[i], ++c[a[i]];
    int c1=0,cg2=0; FOR(i,0,maxi) c1 += (c[i]==1), cg2 += (c[i]>2); 

    if(c1&1 && !cg2) cout << "NO" << '\n', exit(0);
    cout << "YES" << '\n';

    c1 = 0, cg2 = 1;
    FOR(i,0,n)
    {
        if(c[a[i]] == 1) cout << (c1?'A':'B'), c1=!c1;
        else if(c[a[i]] == 2) cout << "A";
        else cout << (cg2?'B':'A'), cg2=0; 
    }
    cout << '\n';
}