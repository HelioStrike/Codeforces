#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int l,r;

bool distDigits(int i)
{
    map<int,int> m;
    while(i)
    {
        m[i%10]++;
        if(m[i%10]>1) return 0;
        i/=10;
    }
    return 1;
}

int main()
{
    cin>>l>>r;
    FOR(i,l,r+1)
    {
        if(distDigits(i))
        {
            cout<<i<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';

    return 0;
}
