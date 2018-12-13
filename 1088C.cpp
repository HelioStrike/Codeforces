#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int main()
{
    int n,c; cin >> n; cout << n << '\n';
    cout << "1 " << n << " 10000" << '\n';
    FOR(i,1,n) { cin >> c; cout << "2 " << i << " " << (10000+c-i) << '\n';}
}