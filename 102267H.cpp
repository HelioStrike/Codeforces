#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double v,s,r; cin>>v>>s;
    r=(s/2)/sin(M_PI*(1/v));
    cout<<setprecision(11)<<M_PI*r*r<<'\n';

    return 0;
}
