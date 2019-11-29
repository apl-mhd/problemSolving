#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long int ll;
int sumSquare(int n){


    if (n == 1)
        return 1;

    int sum =0;
    for (int i = 2; i < n; ++i) {

        int count = 0;
        for (int j = 0; j < n; ++j){

            if( j+i <= n){
                count++;
            }

        }

        sum = sum + count*count;
    }

    sum = sum + n*n +1;
    return  sum;

}


int main() {

    int  n = 1;
    while(n){

        cin>>n;

        if (n == 0)
            break;

        else
            cout<<sumSquare(n)<<endl;

    }

    return 0;
}