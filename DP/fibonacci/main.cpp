#include <iostream>
#include <cstdio>

using namespace std;

int dp[100];



int fibo(int n){

    if(n==0 || n==1)
        return dp[n] = n;


    if(dp[n] != -1)

        return dp[n];


    return dp[n] =  fibo(n-1) + fibo(n-2);

}

int main() {


    memset(dp, -1, sizeof(dp));




    for (int i = 1; i <50; ++i) {

        cout<<fibo(i)<<" ";
    }

    cout<<endl;

    for (int j = 0; j <10 ; ++j) {


        //cout<<dp[j]<<" ";
    }



    return 0;
}