#include <iostream>
#include <cstdio>

#define  maxSize  100010
using namespace std;
int arr[maxSize] = {0};
int tree[maxSize * 3] = {0};

void init(int node, int b, int e){

    if(b == e){
        arr[b] = 0;
        tree[node]  +=1;
        return;
    }

    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = ( b + e ) / 2;

    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left] + tree[right];


}

void  update(int node, int b, int e, int i){


        if(b == e && b == i){
            arr[i] += 1;
            tree[node] = ((arr[i] %3 == 0)? 1 : 0);
            return;
        }


        if(i< b || i > e)
            return;


        int left = node * 2 + 1;
        int right = node * 2 + 2;

        int mid = (b + e) /2;
        update(left, b, mid, i);
        update(right, mid+1, e, i);
        tree[node] =   tree[left] + tree[right];

        
}

int query(int node, int b, int e, int i, int j){

        if(j< b || i > e)
            return  0;

        if(b >= i && e<=j)
            return tree[node];


        int left = node * 2 + 1;
        int right = node * 2 + 2;
        int mid = (b + e) / 2;
        return query(left, b, mid, i, j) + query(right, mid+1, e, i, j) ;

}


int main() {




    int n, q;

    scanf("%d%d", &n,&q);
    cin>>n>>q;

    init(0, 0, n-1);


    for (int k = 0; k <q; ++k) {

        int aq, i, j;
        cin>>aq>>i>>j;
        if(aq == 1)
            cout<<query(0, 0, n-1, i, j)<<endl;
        else{

            for (int l = i; l <=j; ++l) {
                update(0, 0, n-1, l);
            }
        }


    }



    /*update(0, 0, 3, 0);
    update(0, 0, 3, 0);
    update(0, 0, 3, 1);
    update(0, 0, 3, 1);
    update(0, 0, 3, 2);
    update(0, 0, 3, 2);
    update(0, 0, 3, 3);
    update(0, 0, 3, 3);*/




    /*init(0, 0, 3);

    cout<<query(0,0,3, 0, 3)<<endl;

    update(0,0,3,4);
    cout<<query(0,0,3, 0, 0)<<endl;
    cout<<query(0,0,3, 0, 1)<<endl;
    cout<<query(0,0,3, 0, 2)<<endl;
    cout<<query(0,0,3, 1, 3)<<endl;



    for (int i = 0; i < 7; ++i) {

        //cout<<tree[i]<<" ";
    }
*/



    return 0;
}