#include <iostream>
#include <cstdio>
#include <algorithm>


typedef long long  ll;
using  namespace std;

#define min4(a,b,c,d) min(min(a,b), min(c, d))



ll solve(ll x, ll y, ll z){


        ll a = x * 2 +  y * 2;
        ll b = (x+z)*2;
        ll c = (y+z)*2;
        ll d = x + y +z;


    return min4(a,b,c,d);

}

int main() {


        ll a,b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<endl;

}