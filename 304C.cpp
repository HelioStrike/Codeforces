#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int trd[n];
    if(n%2==0) cout<<-1<<'\n';
    else
    {
        FOR(i,0,n) cout<<i<<' '; cout<<'\n';
        FOR(i,0,n) cout<<(i+1)%n<<' '; cout<<'\n';
        FOR(i,0,n) cout<<(2*i+1)%n<<' '; cout<<'\n';
    }

    return 0;
}
