#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;

int  makeCoin(int coins[], int i,  int amount, int n){



    int  a,b;

    if(i>n){
        if(amount == 0){

            return  0;
        }

        else {
            return INT_MAX;

        }

    }





    if(coins[i] <= amount){

        a = 1 + makeCoin(coins, i+1,amount-coins[i], n);

       cout<<"a("<<a<<")"<<endl;

    }

        b =  makeCoin(coins, i+1, amount, n);
   cout<<"b("<<b<<")"<<endl;


    return min(a,b);

}

int main() {

    int coins[] = {50,100};

    int n = sizeof(coins)/ sizeof(int);
    cout << makeCoin(coins, 0, 50, n-1)<<endl;



    for(int i=0; i<n; i++) {
       // cout << makeCoin(coins, 0, coins[i], n - 1)<<endl;
    }

    return 0;
}