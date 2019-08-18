#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;


int main()
{
    int n,c,cur; cin>>n;
    if(n%2==0) { cout<<"NO"<<'\n'; return 0; }
    int a[2*n];
    c=0,cur=1;
    FOR(i,0,2*n)
    {
        a[c]=cur;
        if(i%2) c--;
        else 
        {
            if(c+n<2*n) c+=n;
            else c-=n;
        }
        cur++;
    }
    cout<<"YES"<<'\n';
    FOR(i,0,2*n) cout<<a[i]<<' ';
    cout<<'\n';

    return 0;
}
