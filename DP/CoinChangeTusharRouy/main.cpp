#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;

/*simplicity come from out of box
 * practice practice and practice
 * practice makes you better
 * No shortcut
 *
 * willpower, patience, solitary
 * */

int main() {


int coins [] = {0,2,3,4,7};


    int max =999;

    int M[5][8];


    //this is simple and elegant
    /*for(int i=0; i<4; i++){
        for(int j=coins[i]; j<=7; j++){

            if(j>=coins[i]){

                if(1+M[j-coins[i]]< M[j]){

                    M[j] = 1+M[j-coins[i]];


                    track[j] = coins[i];
                }

               // M[j] = min(1+M[j-coins[i]],M[j]);

            }


            }
        }
*/


    for(int i=0; i<=4; i++){
        for(int j=0; j<=7; j++){


            if(i==0 || j==0) {

                M[i][j] = max;
                //break;
            }
            else

            if(j<coins[i]){

                M[i][j]= M[i-1][j];

                //cout<<"aa";
            }
            else if(j-coins[i] == 0)
                M[i][j] = 1;

            else{

                if(M[i-1][j] > 1+M[i][j-coins[i]]){

                    M[i][j] = 1+M[i][j-coins[i]];
                } else

                    M[i][j] = M[i][j-coins[i]];

                //M[i][j] = min(M[i-1][j], 1+M[i][j-coins[i]]);
            }
        }

    }

    for(int i=0; i<=4; i++){
        for(int j=0; j<=7; j++) {

            cout<<M[i][j]<<" ";

        }

        cout<<endl;
    }

            cout<<"end";

    return 0;
}