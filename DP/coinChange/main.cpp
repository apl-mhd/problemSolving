/*infinity suu*/

#include <iostream>
#include <cstdio>

using namespace std;

int coinChange(int coins[], int i, int make, int amount){


    if(i>3){

        if((make == amount) && make !=0)
            return  1;
        else

        return 0;

    }

    int a,b;

    if(coins[i]+make <= amount)
         a = coinChange(coins,i + 1,make+coins[i], amount);

     b = coinChange(coins,i+1,make, amount);

    return a||b;


}



int main() {

    int coins[] = {5,8,15,18};

    cout<<coinChange(coins,0,0,5);


    return 0;
}