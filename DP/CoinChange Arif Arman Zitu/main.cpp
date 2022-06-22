#include <iostream>
#include <cstdio>
#define  Max 100

using namespace std;
int M[Max];
int S[Max];

int makeChane(int c[], int n, int size){

    if(M[n] == -1){

        int minval=9999, coinval =-1;
        for(int i=0; i<size; i++){

           // cout<<i<<" ";
            if(c[i]<=n){
                int tval = 1+makeChane(c, n-c[i], size);
                    if(tval<minval) {
                     //   cout<<tval+2<<endl;
                        minval = tval;
                        coinval = c[i];
                    }
            }
        }

        M[n] = minval;
        S[n] = coinval;
    }

    return M[n];

}


int main() {

    M[0]=0;

    int coins[]= {3,4,7};
    int n=7;
    for(int i=1; i<=7; i++)
        M[i]=-1;

    int size = sizeof(coins)/ sizeof(int);
    cout<<"Total "<<makeChane(coins, n, size)<<" coins need to make "<<n<<endl;

    int end = n;

   /* for (int j = 0; j <=n ; ++j) {
        cout<<j<<" : "<<S[j]<<endl;
    }
*/
    cout<<"coins are:"<<endl;
    while(end !=0 ){
        cout<<S[end]<<" ";
        end -=S[end];
    }

    cout<<endl;
    return 0;
}