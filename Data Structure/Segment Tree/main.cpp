#include <iostream>
#include <cstdio>
#define  mx 100001


int arr[mx];
int tree[mx*3] = {0};

using namespace std;

void  init(int node, int b, int e){


    if(b==e){
        tree[node] = arr[b];
        return;
    }


    int left = node*2;
    int right = node*2+1;
    int mid  = (b+e) / 2;

    init(left, b, mid);
    init(right, mid+1, e);

    tree[node] = tree[left] +tree[right];


}

int query(int node, int b, int e, int i, int j){

    if (i > e || j < b)

        return 0;

    if(i<=b && e<=j)
        return tree[node];

    int left = node *2;
    int right = node * 2 +1;
    int mid = (b + e) /2;

    return query(left, b, mid, i, j) + query(right, mid+1, e, i, j);

}


void  update(int node, int b, int e, int i, int nValue){

    if(i<b || i>e)
        return;

    if(b==e && b==i){

        tree[node] = nValue;
        return;
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b+e)/2;

    update(left, b, mid, i, nValue);
    update(right, mid+1, e, i, nValue);

    tree[node] = tree[left] + tree[right];


}


int main() {


    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 0;
    arr[4] = 0;



    init(1,1,4);

    for (int i = 1; i <8 ; ++i) {

        //cout<<i<<" :"<<tree[i]<<" "<<endl;
    }
    cout<<endl;

    update(1, 1, 4, 1, 1);
    update(1, 1, 4, 2, 2);
    update(1, 1, 4, 3, 3);
    update(1, 1, 4, 4, 4);



    cout<<query(1, 1, 4, 1, 1)<<endl;
    cout<<query(1, 1, 4, 1, 2)<<endl;
    cout<<query(1, 1, 4, 1, 3)<<endl;
    cout<<query(1, 1, 4, 1, 4)<<endl;

    cout<<query(1, 1, 4, 2, 2)<<endl;
    cout<<query(1, 1, 4, 2, 3)<<endl;
    cout<<query(1, 1, 4, 2, 4)<<endl;


    cout<<query(1, 1, 4, 3, 3)<<endl;
    cout<<query(1, 1, 4, 3, 4)<<endl;

    cout<<query(1, 1, 4, 4, 4)<<endl;







    return 0;
}