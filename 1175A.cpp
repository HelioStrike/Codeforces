#include <bits/stdc++.h>
using namespace std;

long long n,k,x,t;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k; x=-1;
        while(n)
        {
            x+=n-(n/k)*k;
            n/=k,x++;
        }
        cout<<x<<'\n';
    }

    return 0;
}
