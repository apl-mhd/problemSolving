#include <iostream>
#include <cstdio>

using namespace std;
int M[4021];


int makeChane(int c[], int n){

    if(M[n] == -1){

        int maxval=INT_MIN;

        for(int i=0; i<2; i++){

            if(c[i]<=n){

                int tval = 1+makeChane(c, n-c[i]);


                if(tval>maxval) {
                    cout<<tval<<endl;

                    maxval = tval;
                }

            }

        }

        M[n] = maxval;

    }

    return M[n];

}


int main() {




    M[0]=0;
    for(int i=1; i<4021; i++)
        M[i]=-1;

    int coins[]= {1,2,3};
    int n=2;
    cout<<"Total "<<makeChane(coins, n)<<" coins need to make "<<n<<endl;


    for (int j = 0; j <20 ; ++j) {
        cout<<M[j]<<" ";
    }

    cout<<endl;




    return 0;
}