#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,x,c=0; cin>>s>>x;
    while(s) s/=x,c++;
    cout<<c<<'\n';

    return 0;
}
