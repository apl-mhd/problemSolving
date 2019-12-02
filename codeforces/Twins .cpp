#include <iostream>
#include <cstdio>
#include <algorithm>


using namespace std;

int main() {


    int n;
    int sum=0,count=0;
    int arr[1010] = {0};

    cin>>n;

    for (int i = 1; i <=n ; ++i) {
        cin>>arr[i];
        sum +=arr[i];

    }

    sum  = sum >>1;
    int sum2 =0;
    sort(arr+1, arr+n+1, greater<int>());

    count = 0;

    for (int i = 1; i <=n ; ++i) {

        if(sum2 > sum)
            break;

        count++;

        sum2 +=arr[i];

    }

    cout<<count<<endl;


    return 0;
}