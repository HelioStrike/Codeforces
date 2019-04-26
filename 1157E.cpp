#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 200010
using namespace std;

int n,c,a[N]; 
multiset<int> s;

int main()
{
    cin>>n;
    FOR(i,0,n) cin>>a[i];
    FOR(i,0,n) cin>>c,s.insert(c);
    FOR(i,0,n)
    {
        auto it=s.lower_bound(n-a[i]);
        if(it==s.end()) c=*s.begin(),s.erase(s.begin());
        else c=*it,s.erase(it);
        cout<<(a[i]+c)%n<<' ';
    }
    cout<<'\n';

    return 0;
}