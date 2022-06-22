#include <iostream>
#include <cstdio>

using namespace std;

int arr[]={1,2,3,3,3,3,3,8,9};
int bst(int l, int r, int v){


        if(r>=l){

            int m = l + (r - l) /2;

            if(arr[m] == v)
                return m;
            if(arr[m]< v)
                return bst(m+1, r, v);

            return  bst(l, m-1, v);
        }

    return -1;

}

int main() {


    for (int i = 0; i <20 ; ++i) {
        cout<<i<<" "<<bst(0, sizeof(arr)/ sizeof(arr[0]) -1, i)<<endl;
    }

    return 0;
}