#include <iostream>
#include <cstdio>

using  namespace std;

void solve(){

    long  long a, b, x, eq1, eq2;

    x =1;

    cin>>a>>b;

    eq1 = b-a;
    eq2 = a -b;

    cout<<eq1<<" "<<eq2<<endl;


}


int main() {


    int t;

    cin>>t;

    while(t){

        solve();


        t--;

    }





    return 0;
}