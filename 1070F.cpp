#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 400010
using namespace std;


int n,c,f,ans,l,maxm,maxi;
int sizes[4];
priority_queue<int> v[4];

int main()
{
    cin >> n;
    FOR(i,0,n) cin >> c >> f,v[2*(c/10)+(c%10)].push(f);

    while(!v[1].empty() && !v[2].empty())
    {
        ans += v[1].top() + v[2].top(); v[1].pop(), v[2].pop();
    }

    while(!v[3].empty())
    {
        maxm = maxi = -1;
        FOR(i,0,3)
        {
            if(!v[i].empty() && v[i].top() > maxm) 
            {
                maxm = v[i].top();
                maxi = i;
            }
        }
        ans += v[3].top(); v[3].pop();
        if(maxi!=-1) ans+=v[maxi].top(), v[maxi].pop();
    }

    cout << ans << '\n';

    return 0;
}