#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

ll a[4];

int main()
{
    int n,k; cin >> n;
    string s,r="hard"; cin >> s;
    FOR(i,0,n)
    {
        cin >> k;
        if(s[i]==r[0]) { a[0]+=k; continue;}
        FOR(j,1,4)
        {
            if(s[i]==r[j]) { a[j]=min(a[j]+k,a[j-1]); break;}
        }
    }
    cout << a[3] << '\n';

    return 0;
}