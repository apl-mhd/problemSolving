#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>
using namespace std;
int dp[100][100];

int make(int coin[], int tk, int n){


//1,2,3,5
    if(dp[n][tk] !=-1)
        return dp[n][tk];


    if (tk == 0)
        return  0;

    if ((coin[n] > tk) || (n > 3))
        return 9999;


    int a  = 1+make(coin, tk - coin[n],n+1);
    int b  =  make(coin, tk, n+1);

    dp[n][tk] = min(a,b);

    return  dp[n][tk];


 //   return min(1+make(coin, tk - coin[n],n+1), make(coin, tk, n+1));


}


int main() {

    int coin[] = {1,2,3,5};
    int tk=5;
    
    for (int i = 0; i < 10 ; ++i) {
        for (int j = 0; j <10 ; ++j) {

            dp[i][j] = -1;
        }
    }

    cout<< make(coin, tk,0)<<endl;

    for (int i = 0; i < 10 ; ++i) {
        for (int j = 0; j <10 ; ++j) {

            cout<<dp[i][j]<<" ";
        }

        cout<<endl;
    }




    return 0;
}