#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <cmath>
using namespace std;

typedef map<string, int > m;

int main() {


    int arr[2] = {0};

    string s;

    int n;
    cin>>n;

    while(n){

        cin>>s;

        if(s=="X++" || s=="++X")
            arr[0]++;
        else
            arr[1]++;

        n--;
    }

    //if(arr[1] > arr[0])
        cout<<arr[0]-arr[1]<<endl;
    //else
      //  cout<<arr[1] - arr[0]<<endl;



    return 0;
}