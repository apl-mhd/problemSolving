#include <iostream>
#include <cmath>

using namespace std;

int solve(int a, int b){

    if(b == 1)
        return 1;

    if(a == 1)

        return pow(b,2);

    if(b % a == 0)
        return  pow((b / a), 2) * 2;

    if(b == a)
        return 1;




}


int a(){


    return pow(2,2);
}



int main() {



    cout<<a()<<endl;

    int t;


    while(t){

        int a, b;

        cin>>a>>b;
        cout<<solve(a,b)<<endl;
        t--;

    }



    return 0;
}