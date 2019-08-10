#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;        
    }
    return true;
}

int main()
{
    int n; cin>>n;
    if(n<5) cout<<-1<<'\n';
    else
    {
        bool p=isprime(n-2);
        if(!p) cout<<-1<<'\n';
        else cout<<2<<' '<<n-2<<'\n';
    }

    return 0;
}
