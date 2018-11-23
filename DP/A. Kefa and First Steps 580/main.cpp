#include <iostream>
#include <cstdio>
#include <algorithm>
#include <climits>

#define MAX 50
using namespace std;

int main(){


    freopen("input.txt", "r",stdin);
    int n, ar,i,j;

    cin>>n;

    if(n==1)
        cout<<1;


    else {
        int array[n], arrayCount[n];


        for (i = 0; i < n; i++) {

            cin >> ar;
            array[i] = ar;
            arrayCount[i] = 1;

        }


        for (i = 0; i < n; i++) {

            for (j = i + 1; j < n; ++j) {

                // cout<<array[i]<<"<"<<array[j]<<endl;
               // cout << i << "<" << j << endl;

                if (array[i] <= array[j] && array[j - 1] <= array[j]) {

                    arrayCount[i]++;

                    if (j == n - 1)
                        i = n;
                } else {

                    i = j;
                }

            }


        }


        sort(arrayCount, arrayCount + n, greater<int>());
        cout << arrayCount[0];


    }
}
