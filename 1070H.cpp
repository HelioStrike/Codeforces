#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 10010
using namespace std;


int n,q;
string s,ss[MAXN];
map<string,int> m,c; 

int main()
{
    cin >> n;
    FOR(i,1,n+1)
    {
        cin >> ss[i];
        FOR(j,0,ss[i].length())
        {
            s = "";
            FOR(k,j,ss[i].length())
            {
                s += ss[i][k];
                if(m[s]!=i) m[s]=i,c[s]++;
            }          
        }
    }

    cin >> q;
    FOR(i,0,q)
    {
        cin >> s;
        cout << c[s] << " ";
        if(c[s]==0) cout << "-" << '\n';
        else cout << ss[m[s]] << '\n';
    }

    return 0;
}