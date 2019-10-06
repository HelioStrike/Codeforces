#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int t,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<5) { cout<<4-n<<'\n'; continue; }
        cout<<(n%2==1)<<'\n';
    }

    return 0;
}
