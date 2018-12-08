#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int n,k,p,c;
map<int,int> m;
priority_queue<int> q;

int main()
{
    cin >> n;
    FOR(i,0,n) cin >> k,m[k]++;
    for(auto[i,x]:m) q.push(x),p=max(p,x);
    k = 0;
    while(p&&!q.empty())
    {
        k = max(k,((1<<++c)-1)*(p=min(p,q.top()))); q.pop();
        p /= 2;
    }
    cout << k << '\n';

    return 0;
}