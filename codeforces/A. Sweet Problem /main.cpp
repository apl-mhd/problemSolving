#include <iostream>
#include <cstdio>

using namespace std;


int x = 0;
int y = 0;
int z = 0;


int solve(int a, int b, int c){



       // if(a <0 || b<0 || c<0)
         //   return  -1;


        if( (a  == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 & c== 1) )
            return 1;

    else if(a <0 || b<0 || c<0)
             return  0;


         x +=  solve(a-1, b-1, c);
         y +=   solve(a, b-1, c-1);
         z +=    solve(a-1, b, c-1);

        //a+= solve(a-1, b-1, c) + solve(a, b-1, c-1) + solve(a-1, b, c-1);

         return  max(z, max(x,y));



}

int sum(int n){

    if(n==0)
        return n;

    return  1 + sum(n-1);
}

int main() {


   // cout<<sum(4)<<endl;

    cout<<solve(1, 1, 1)<<endl;
    x=0,y=0,z=0;
    cout<<solve(1, 2, 1)<<endl;
   // cout<<solve(4,1, 1)<<endl;



    return 0;
}