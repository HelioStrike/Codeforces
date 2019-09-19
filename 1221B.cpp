#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n;

int main()
{
    cin>>n;
    FOR(i,0,n) { FOR(j,0,n) cout<<(((i+j)%2==0)?"W":"B"); cout<<'\n'; }

    return 0;
}
