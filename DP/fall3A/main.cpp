#include <iostream>
#include <cstdio>

using namespace std;

int dp[10];


int catalan(int n){


    if(dp[n]!=-1)
        return dp[n];

    int c=0;

    for(int i=0; i<n; i++){

        c = c+ catalan(i) * catalan(n-i-1);
        dp[n]=c;
    }

   // dp[n]=c;
    return dp[n];

}
int main() {

    dp[0]=1;

    for(int i=1; i<10; i++)
        dp[i]=-1;

    cout<<catalan(2)<<endl;


    for(int i=1; i<10; i++)
        cout<<dp[i]<<" ";

    return 0;
}