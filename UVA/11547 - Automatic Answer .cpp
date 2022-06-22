#include <iostream>
#include <cstdio>
#include <cmath>

using namespace  std;

int main() {
    int t;
    cin>>t;

    while (t--){
        int number;
        cin>>number;

        number = (((((number * 567) / 9) + 7492)* 235) / 47) - 498;
        number = number /10;
        number = (int) number % 10;
        cout<<abs(number)<<endl;
    }

    return 0;
}
