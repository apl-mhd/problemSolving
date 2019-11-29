#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
using namespace std;


#define  maxSize 100010



//int arr[100000] = {0};
//int tree[100000*4]={0};
int *arr;
int *tree;
void  init(int node, int b, int e){

        if(b == e){

            tree[node] = arr[b];
            return;
        }


        init(node <<1 , b, (b+e)>>1);
        init((node<<1)+1, ((b+e)>>1)+1, e);
        tree[node] = min(tree[node<<1],  tree[(node<<1)+1]);

}

int query(int node, int b, int e, int i, int j){

        if(j <b || i > e)
            return INT_MAX;

        if(b >= i &&  e <= j){

            return tree[node];
        }


    return min(query(node*2, b, (b+e)/2, i, j),  query(node*2+1, (b+e)/2+1, e, i, j));


}


int main() {



   int n, q;
    cin>>n;


    arr = new int[n+1];
    tree = new int[n*4];


    for (int i = 0; i <n; ++i) {

        cin>>arr[i];
    }

    init(1, 0, n-1);


    cin>>q;

    for (int i = 0; i <q; ++i) {
            int a,b;
            cin>>a>>b;
            cout<<query(1, 0, n-1, a, b)<<endl;
    }



    return 0;
}