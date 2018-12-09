#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 200010
using namespace std;


int q,n,l=1,r;
char d;
int ds[MAXN];

int main()
{
    cin >> q;
    FOR(i,0,q)
    {
        cin >> d >> n;
        if(d == 'L') ds[n]=--l;
        else if(d == 'R') ds[n]=++r;
        else cout << min(ds[n]-l,r-ds[n]) << '\n'; 
    }

    return 0;
}