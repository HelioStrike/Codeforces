#include <bits/stdc++.h>
using namespace std;

int t,n,a,b;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n; a=0;
        while(a*(a+1)/2<=n) a++; a--;
        b=n-a*(a+1)/2; a-=1;
        cout<<"133";
        while(b--) cout<<'7';
        while(a-->0) cout<<"3";
        cout<<"7\n";
    }

    return 0;
}
