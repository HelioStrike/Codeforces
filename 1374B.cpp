#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll t,n,c2,c3;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; c2=c3=0;
        while(n%2==0) n/=2,c2++;
        while(n%3==0) n/=3,c3++;
        if(n>1 || c2>c3) cout<<-1<<'\n';
        else cout<<(c3-c2)+c3<<'\n';
    }
 
    return 0;
}