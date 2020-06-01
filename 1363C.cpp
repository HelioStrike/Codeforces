#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define N 1010
using namespace std;

ll t,n,k,x,y,deg;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; deg=0;
        FOR(i,1,n)
        {
            cin>>x>>y;
            if(x==k || y==k) deg++;
        }
        if(deg<2) cout<<"Ayush"<<'\n';
        else cout<<((n%2)?"Ashish":"Ayush")<<'\n';
    }
    return 0;
}