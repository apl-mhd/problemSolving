#include <iostream>
#include <cstdio>
#include <algorithm>

/*limited supply of coins*/

using namespace std;


int  makeCoine(int coins[], int i,  int amount, int n){


    if(amount == 0)
        return 0;


    if(amount < 0 || i > n)

        return 9999;


    int  a=9999;
    int b;
    if(coins[i] <= amount){

        a = 1+ makeCoine(coins, i+1,amount-coins[i],n);
    }

        b = makeCoine(coins, i+1, amount,n);

    return min(a,b);


}

int main(){

    int coins[] = {15,30,50};

    int size = (sizeof(coins)/4)-1;


    cout<<makeCoine(coins,0,45,size);

    return 0;
}
