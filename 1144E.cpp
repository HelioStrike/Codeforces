#include <bits/stdc++.h>
using namespace std;

int n,c,x,k='z'-'a'+1; 
string a,s,t;

int main()
{
    cin>>n>>s>>t; a=s;
    for(int i=n-1;i>=0;i--)
    {
        x=s[i]+t[i]+c-2*'a';
        a[i]=x%k,c=x/k;
    }

    for(int i=0;i<n;i++)
    {
        x=a[i]+k*c;
        a[i]=char(x/2+'a');
        c=x%2;
    }
    cout<<a<<'\n';

    return 0;
}