#include <iostream>
#include <cstdio>
using namespace  std;
int main() {

    int n, m, t;

    cin>>t;

    while(t--){
        cin>>n>>m;
        int result = (n/3) * (m/3);
        cout<<result<<endl;
    }


    return 0;
}
