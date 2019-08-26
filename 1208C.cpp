#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define N 1010
using namespace std;

int n,c,a[N][N];

int main()
{
    cin>>n;
    for(int i=0;i<n;i+=4)
    {
        for(int j=0;j<n;j+=4)
        {
            FOR(k,0,4)
            {
                FOR(l,0,4)
                {
                    a[i+k][j+l]=c;
                    c++;                    
                }
            }
        }
    }

    FOR(i,0,n)
    {
        FOR(j,0,n)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }

    /*
    FOR(i,0,n)
    {
        int x=a[i][0];
        FOR(j,1,n) x^=a[i][j];
        cout<<x<<' ';
    }
    cout<<'\n';

    FOR(i,0,n)
    {
        int x=a[0][i];
        FOR(j,1,n) x^=a[j][i];
        cout<<x<<' ';
    }
    cout<<'\n';
    */

    return 0;
}