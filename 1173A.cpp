#include <bits/stdc++.h>
using namespace std;


int main()
{
    int p,n,q; cin>>p>>n>>q;
    if(p==n && q==0) cout<<0;
    else if((p-n+q)>=0 && (p-n-q)<=0) cout<<'?';
    else if(p>n) cout<<'+';
    else cout<<'-';
    cout<<'\n';
}