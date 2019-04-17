#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;


int n,b,a,ia,c,ans;

int main()
{
    cin>>n>>b>>a;
    ia=a;
    FOR(i,0,n)
    {
        cin>>c;
        if(b==0 && a==0) break;
        if(b==0) a--;
        else if(c==1 && b>0 && a!=ia) b--,a++;
        else if(a==0) b--;
        else a--;
        //cout<<b<<' '<<a<<'\n';
        ans++; 
    }
    cout<<ans<<'\n';

    return 0;
}