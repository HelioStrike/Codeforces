#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll k,r,i,mod=1e9+7;
string s;

int main()
{
    for(cin>>s,s+='b';i<s.length();i++)
    {
        if(s[i]=='a') k++;
        if(s[i]=='b') r=(r*k+r+k)%mod,k=0;
    }
    cout << r << '\n';
}