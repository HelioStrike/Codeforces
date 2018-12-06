#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int n,k,no,pre;

int main()
{
    cin >> n;
    int a[n]; FOR(i,0,n) { cin >> a[i]; k += a[i]; if(a[i] == 1) no++;}
    if(k + 2 < 2*n) { cout << "NO" << '\n'; return 0;}
    cout << "YES" << " " << min(n-1,n-no+1) << '\n';
    cout << (n-1) << '\n';
    FOR(i,0,n) 
    { 
        if(a[i]>1)
        {
            if(pre) cout << pre << " " << (i+1) << '\n';
            else a[i]++;
            pre = (i+1);
        }
    }

    k = 0;
    FOR(i,0,n) 
    { 
        if(a[i]==1)
        {
            if(pre) { cout << (i+1) << " " << pre << '\n'; pre = 0; continue;}
            while(a[k] <= 2) k++;
            cout << (i+1) << " " << (k+1) << '\n';
            a[k]--;
        }
    }

    return 0;
}