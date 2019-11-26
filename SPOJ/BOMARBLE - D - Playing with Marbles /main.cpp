#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
#define MX INT_MAX
#define MIN INT_MIN

using namespace std;


int dp[1010]={0};



int solve(int n){

    if (n== 1)
        return 5;


    if(dp[n] !=0)
        return dp[n];

    return dp[n] =  solve(n-1) + n*3 +1;
}

int main() {


    dp[1] = 5;

    int n =1;

    while(n){

        cin>>n;
        if(n !=0)
            cout<<solve(n)<<endl;

    }



    return 0;
}