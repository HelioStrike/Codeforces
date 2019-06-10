#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s,t; ll n,c,a[3000010];

int main()
{
    cin>>s>>t>>n;
    for(int i=0;s[i];i++) for(ll j=i,k=n,h=0;s[j]&&(t[s[j]-'a']>'0'||k--);j++) a[c++]=h=(h*131)^s[j];
    sort(a,a+c);
    cout<<unique(a,a+c)-a<<'\n';

    return 0;
}
