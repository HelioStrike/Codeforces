#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(n/2-(n%2==0))<<'\n';
    }
    return 0;
}