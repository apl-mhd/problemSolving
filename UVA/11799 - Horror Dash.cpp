#include <iostream>
#include <cstdio>
using namespace std;

int main() {


    int t, n, speed;
    cin>>t;

    for (int i = 1; i <=t ; ++i) {

        cin>>n;
        int maxSpeed = 0;

        for (int j = 0; j <n ; ++j) {
            cin>>speed;
            maxSpeed = max(maxSpeed, speed);
        }
        cout<<"Case "<< i<<": "<<maxSpeed<<endl;
    }

    return 0;
}