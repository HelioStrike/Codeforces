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
        if(n==1) { cout<<-1<<'\n'; continue; }
        FOR(i,0,n-1) cout<<5;
        cout<<4<<'\n';
    }
}