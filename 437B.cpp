#include <bits/stdc++.h>
using namespace std;

int s,l;
vector<int> v;

int main()
{
    cin>>s>>l;
    for(int i=l;i>0&&s>0;i--) if(s-(i&-i)>=0) s-=i&-i,v.push_back(i);
    if(s>0) cout<<-1;
    else { cout<<v.size()<<'\n'; for(int i=0;i<v.size();i++) cout<<v[i]<<' '; }
    cout<<'\n';

    return 0;
}
