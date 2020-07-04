#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,x;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; 
        FOR(i,0,n)
        {
            cin>>x;
            if(i%2) 
            {
                if(x<0) x*=-1;
            }
            else if(x>0) x*=-1;
            cout<<x<<' ';
        }
        cout<<'\n';
    }
 
    return 0;
}