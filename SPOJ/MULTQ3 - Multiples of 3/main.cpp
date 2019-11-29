#include <iostream>
#include <cstdio>

#define  maxSize  100010
using namespace std;
int arr[maxSize] = {0};



struct  info{

    int sum = 0;


}tree[maxSize * 3];



void init(int node, int b, int e){

    if(b == e){
        tree[node].sum = 0;
        return;
    }

    int l = node * 2 + 1;
    int r = node * 2 + 2;
    int m = ( b + e ) / 2;

    init(l, b, m);
    init(r, m+1, e);

    tree[node].sum = 0;

}


void  update(int node, int b, int e, int i, int j, int carry=0){


        if( j<b || i > e ){

            return;
        }

        if(b>=i && e<=j){

            tree[node].sum +=1;
            return;
        }


        int l = node * 2 + 1;
        int r = node * 2 + 2;
        int m = ( b + e ) / 2;
        update(l, b, m, i, j, carry+tree[node].sum);
        update(r, m+1, e, i, j, carry+tree[node].sum);




}




int query(int node, int b, int e, int i, int j, int carry = 0){

        if(j< b || i > e)
            return  0;

        if(b >= i && e<=j){



            return 0;
        }



        int l = node * 2 + 1;
        int r = node * 2 + 2;
        int m = (b + e) / 2;



         return  query(l, m, i, j, carry + tree[node].sum) ;

}


int main() {


/*
    init(0, 0, 3);
    update(0, 0, 3, 0, 3);
    update(0, 0, 3, 0, 1);
    update(0, 0, 3, 2, 2);
    update(0, 0, 3, 2, 2);*/



    for (int i = 0; i <7 ; ++i) {

        cout<<i<<" "<< tree[i].sum<<"\n";
    }


/*
    cout<<tree[0].sum<<endl<<endl;


     //update(0, 0, 3, 1, 1);
     //update(0, 0, 3, 1, 1);
     //
    cout<<query(0, 0, 3, 1, 1)<<endl;
    cout<<query(0, 0, 3, 0, 1)<<endl;
    cout<<query(0, 0, 3, 0, 0)<<endl;
    cout<<query(0, 0, 3, 1, 3)<<endl;
    cout<<query(0, 0, 3, 2, 3)<<endl;
    cout<<query(0, 0, 3, 2, 2)<<endl;
    cout<<query(0, 0, 3, 0, 3)<<endl;*/





   /* int n, q;

    scanf("%d%d",&n, &q);
    init(0, 0, n-1);


    for (int i = 0; i < q ; ++i) {

        int a,b,c;

        scanf("%d%d%d",&a, &b, &c);
        if(a==1)

            printf("%d\n",query(0, 0, n-1, b, c));

        else

            update(0, 0, n-1, b,c);
    }*/










    return 0;
}