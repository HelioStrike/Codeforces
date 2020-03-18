#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n,m;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<((n%m==0)?"YES":"NO")<<'\n';
    }

    return 0;
}