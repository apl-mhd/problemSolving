#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>


/*limited supply of coins*/

using namespace std;
int  makeCoine(int coins[], int i,  int amount){


    if(i>3){


        if(amount == 0)
            return 0;
        else
            return 9999;

    }


    int  a,b;
    if(coins[i] <= amount){

        a =1+ makeCoine(coins, i+1,amount-coins[i]);
    }

    b = makeCoine(coins, i+1, amount);



    return min(a,b);



}

int main() {

    int coins[] = {5,6,15,18};


    cout<<makeCoine(coins,0,11);

    return 0;
}
