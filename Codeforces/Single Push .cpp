#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <utility>
#define  MAX 100010
using namespace std;

int  yn(){

    int n;
    cin>>n;

    int count =0;
    int a[MAX] ={0};
    int b[MAX] ={0};
    int c[MAX] ={0};

    for (int k = 0; k <n ; ++k) {
        cin>>a[k];
    }

    c[0]=0;
    c[n]=0;

    for (int k = 0; k <n ; ++k) {
        cin>>b[k];
        c[k+1] = b[k]-a[k];
    }

    for (int j = 0; j <=n; ++j) {

        if (c[j] < 0)
            return false;

        if (c[j] != c[j + 1]) {
            count++;
        }
    }

        return (count <= 2);
}

int main() {
    int t;
    cin>>t;

    while(t){
        t--;

        if(yn()){

            cout<<"YES"<<endl;
        } else{

            cout<<"NO"<<endl;
        }
    }

    return 0;
}