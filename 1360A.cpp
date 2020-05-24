#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,a,b;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b) swap(a,b);
        cout<<pow(max(a,2*b),2)<<'\n';
    }
    return 0;
}