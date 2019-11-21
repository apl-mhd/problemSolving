#include <iostream>
#include <cstdio>
using namespace std;

void  prime(int n){   //2 to n

    bool number[n+1];

    memset(number, true, sizeof(number));

    for (int i = 2; i*i<=n; ++i) {
        if(number[i] == true){
            for (int j = i*i ; j <=n ;  j +=i) {

                    number[j] = false;
            }
        }

    }


    for (int i = 2; i <=n ; ++i) {
            if(number[i])
                cout<<i<<" ";
    }



}




int main() {

    prime(100);
    return 0;
}