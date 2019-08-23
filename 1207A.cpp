#include <bits/stdc++.h>
using namespace std;

int t,b,p,f,h,c,a,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>b>>p>>f>>h>>c; a=0;
        if(h>c)
        {
            n=min(b,2*p)/2;
            b-=2*n;
            a=n*h;
            n=min(b,2*f)/2;
            b-=2*n;
            a+=n*c;
        }
        else
        {
            n=min(b,2*f)/2;
            b-=2*n;
            a=n*c;
            n=min(b,2*p)/2;
            b-=2*n;
            a+=n*h;
        }
        cout<<a<<'\n';
    }

    return 0;
}