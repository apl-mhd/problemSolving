#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
using namespace std;

int energy [] ={2,5, 7};


int minimum(int e,int i, int energy[] ){

    if(i>2 || e<0){
        return 9999;

    }

    if(e==0)
        return  1;


    int a =0+minimum(e -energy[i], i, energy);
    int b = minimum(e, i+1, energy);

    return min(a,b);
}



int main() {

    cout<<minimum(12,0,energy)<<endl;
    return 0;
}