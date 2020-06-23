#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<((n%4)?"NO":"YES")<<'\n';
    }
 
    return 0;
}