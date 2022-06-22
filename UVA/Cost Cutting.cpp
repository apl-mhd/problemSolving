#include <iostream>
#include <cstdio>
#include <algorithm>

using  namespace std;

int main() {



    int t;
    int arr[3];


    cin>>t;

    for (int i = 1; i <=t; ++i) {
        cin>>arr[0]>>arr[1]>>arr[2];

        sort(arr, arr+3);

        cout<<"Case "<<i<<": "<<arr[1]<<endl;

    }

    return 0;
}