#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
#define MX INT_MAX
#define MIN INT_MIN




using namespace std;

int dp[110][110];
int arr[110][110];



int solve(int n, int m){


    memset(dp, 0, sizeof(dp));
    memset(dp, 0, sizeof(arr));


    for (int i = 0; i <n; ++i) {

        for (int j = 1; j <=m ; ++j) {

            cin>>arr[i][j];
        }


    }

    for (int i = 1; i <=m; ++i) {

        dp[0][i] = arr[0][i];  //0 1  3  1  2  6 0//

    }


    for (int i = 0; i <n-1; ++i) {
        for (int j = 1; j <=m; ++j) {
            int a = arr[i+1][j];
            dp[i+1][j] = max(max(a+dp[i][j-1], a+dp[i][j]), a+dp[i][j+1]);
        }
    }



    int max = MIN;

    for (int i = 1; i <=m; ++i) {

        if (dp[n-1][i] > max){

            max = dp[n-1][i];
        }
    }

    return max;
}

int main() {


    int t;
    int n,m;
    cin>>n>>m;

    cout<<solve(n, m)<<endl;




    return 0;
}