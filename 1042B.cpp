#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int main()
{
    int n,c,s; cin >> n;
    string v; int stor[8]; memset(stor, 63, sizeof(stor)); stor[0] = 0;
    while(n--)
    {
        cin >> c >> v; s = 0;
        FOR(i,0,v.length()) s += 1<<(v[i]-'A');
        FOR(i,0,8) stor[i|s] = min(stor[i|s], stor[i]+c);
    }
    cout << stor[7] << '\n';
}