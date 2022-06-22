#include <iostream>
#include <cstdio>
#include <climits>

using  namespace std;

int max(int a, int b){


    return (a>b)? a:b;
}

int max(int a, int b, int c){


    return (max(a,b)>c)? max(a,b):c;
}


int combine(int A[], int start, int mid, int end){

    int leftSum = INT_MIN;
    int sum = 0;

    for (int i =mid ; i>= start; i--) {

        sum +=A[i];

        if(sum > leftSum)
            leftSum = sum;

    }


    int rightSum = INT_MIN;

    sum=0;

    for (int i = mid+1; i <=end ; i++) {

        sum +=A[i];
        if(sum > rightSum)
            rightSum = sum;


    }

    return  leftSum + rightSum;

}


int maxSub(int A[], int start, int end){


    if(start == end)
        return A[start];

    int mid = (start + end) /2;

    return  max(maxSub(A, start, mid),maxSub(A, mid+1, end),combine(A, start, mid, end));

}


int main() {



    int A[] = {-2,-5,6,-2,-3,1,5,-6};

    cout<<maxSub(A, 0, 7);




    return 0;
}