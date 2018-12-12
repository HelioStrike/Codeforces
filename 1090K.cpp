#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int n,k;
string s,t;
map<pair<string,int>, vector<int> > m;

int main()
{
    cin >> n;
    FOR(i,0,n)
    {
        cin >> s >> t; k=0;
        for(auto& c: t) k |= 1<<(c-'a');
        while(s.size() && (k & (1 << (s.back()-'a')))) s.pop_back();
        m[{s,k}].push_back(i); 
    }

    cout << m.size() << '\n';
    for(auto& e: m)
    {
        cout << e.second.size() << " ";
        for(auto& i: e.second) cout << i+1 << ' ';
        cout << '\n';
    }

    return 0;
}