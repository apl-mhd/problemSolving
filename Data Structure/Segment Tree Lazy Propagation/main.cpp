#include <iostream>
#include <cstdio>
#define  mx 10001
using namespace std;

int  arr[mx];

struct segment{

    int prop = 0,sum = 0;

}tree[mx*3];


void  init(int node, int b, int e){


        if(b == e){
            tree[node].sum = arr[b];
            return;
        }


    int left = node * 2;
    int right = node * 2 + 1;
    int mid = ( b + e ) / 2;

    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum = tree[left].sum + tree[right].sum;

}


void  update(int node, int b, int e, int i, int j, int value){

        if( j < b || i > e)
            return;

        if(b >= i &&  e<=j){

            tree[node].prop = value;
            tree[node].sum += (e-b+1) * value;

            return;
        }


        int left = node *2;
        int right = node * 2 + 1;
        int mid = (b+e) / 2;
        update(left, b, mid, i, j, value);
        update(right, mid+1, e, i, j, value);

        tree[node].sum = tree[left].sum + tree[right].sum  + (e - b + 1) * tree[node].prop;

}

int query(int node, int b, int e, int i, int j, int carry=0){


    if(j < b || i > e)
        return 0;

    if( b>= i && e<=j ){

        return tree[node].sum + (e - b + 1) * carry;
    }


    int left = node * 2;
    int right = node * 2 +1;
    int mid = ( b + e ) / 2;

    return  query(left , b, mid, i, j, carry + tree[node].prop) + query(right, mid+1, e, i, j, carry + tree[node].prop);


}



int main() {

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;

    init(1, 1, 4);
    update(1, 1, 4, 1, 2, 2);

    cout<<query(1, 1, 4, 1, 4)<<endl;
    cout<<query(1, 1, 4, 1, 2)<<endl;
    cout<<query(1, 1, 4, 1, 1)<<endl;
    cout<<query(1, 1, 4, 2, 2)<<endl;
    cout<<query(1, 1, 4, 2, 4)<<endl;
    cout<<query(1, 1, 4, 3, 4)<<endl;

    for (int i = 1; i < 8; ++i){
        cout<<tree[i].sum<<" ";
    }


    return 0;
}