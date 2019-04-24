#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,m,c,nn[2],mm[2];

int main()
{
    cin>>n>>m;
    FOR(i,0,n) cin>>c,nn[c%2]++;
    FOR(i,0,m) cin>>c,mm[c%2]++;
    cout<<min(nn[0],mm[1])+min(nn[1],mm[0])<<'\n';

    return 0;
}