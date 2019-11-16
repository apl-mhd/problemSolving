#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <utility>

using namespace std;
typedef long long int ll;

float  minCard(float n){


    float i = 2.00;

    bool  t = true;
    float div = 0.00;

    while(t){

        div = div + 1/i;

        i++;

        if(div >= n)
            t = false;

    }

    return  i-2;

}



int main() {


    while(true){

        float  n;

        scanf("%f", &n);

        if(n== 0.00)
            break;

        cout<<minCard(n)<<" card(s)"<<endl;


    }



    return 0;
}