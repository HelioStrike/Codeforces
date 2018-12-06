#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int gcd(int a, int b) { return b?gcd(b, a%b):a;}

int main()
{
    int n,k,c; cin >> n;
    FOR(i,2,int(sqrt(n))+1)
    {
        if(n%i == 0 && gcd(i,n/i) == 1)
        {
            cout << "YES" << '\n';
            cout << "2" << '\n';
            k = 1;
            while(1)
            {
                c = n-1-k*(n/i);
                if(c%i == 0)
                {
                    cout << k << " " << i << '\n';
                    cout << (c/i) << " " << (n/i) << '\n';
                    break;
                }
                k++;
            }
            return 0;
        }
    }

    cout << "NO" << '\n';
    return 0;
}