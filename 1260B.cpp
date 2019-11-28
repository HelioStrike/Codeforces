#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,a,b;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<(((a+b)%3==0 && 2*a>=b && 2*b>=a)?"YES":"NO")<<'\n';
    }

    return 0;
}