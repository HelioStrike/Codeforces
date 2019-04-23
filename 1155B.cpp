#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,c;
string s;

int main()
{
    cin>>n>>s;
    n-=10;
    FOR(i,0,n) if(s[i]=='8') c++;
    cout<<(c>=(n+1)/2?"YES":"NO")<<'\n';

    return 0;
}