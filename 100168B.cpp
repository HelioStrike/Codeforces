#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;

int main()
{
    double x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    cout<<asin((x1*y2-x2*y1)/(sqrt(x1*x1+y1*y1)*sqrt(x2*x2+y2*y2)))<<'\n';
    return 0;
}