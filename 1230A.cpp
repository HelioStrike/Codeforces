#include <bits/stdc++.h>
#define FOR(i,a,b) for(ll i = (a); i < (b); i++)
#define ll long long
using namespace std;

int a1,a2,a3,a4;

int main()
{
    cin>>a1>>a2>>a3>>a4;
    if(a1==a2+a3+a4 || a2==a1+a3+a4 || a3==a2+a1+a4 || a4==a2+a3+a1 || a1+a2==a3+a4 || a1+a3==a2+a4 || a1+a4==a2+a3) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}
