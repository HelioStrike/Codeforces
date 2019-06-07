#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=1,y=1; cin>>n;
    cout<<n/2+1<<'\n';
    for(int i=0;i<n;i++)
    {
        cout<<x<<' '<<y<<'\n';
        if(i%2) x++;
        else y++;
    }
}