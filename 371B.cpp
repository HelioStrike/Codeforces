#include <bits/stdc++.h>
using namespace std;

int a,b,ans;

void doit(int k)
{
    int x=0,y=0;
    while(a%k==0) a/=k,x++;
    while(b%k==0) b/=k,y++;
    ans+=abs(x-y);
}

int main()
{
    cin>>a>>b;
    doit(2),doit(3),doit(5);
    cout<<(a==b?ans:-1)<<'\n';

    return 0;
}
