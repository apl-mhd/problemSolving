#include <iostream>
#include <cstdio>
using namespace std;
int a;
int sum(int  n){



    if(n !=5){

      int b = 1+ sum(n-1);

        a=b;

    }

    return  a;
}


int main() {


cout<<sum(9)<<endl;

    return 0;
}