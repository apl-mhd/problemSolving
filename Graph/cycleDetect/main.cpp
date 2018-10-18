#include <iostream>
#include <cstdio>

using namespace std;



int a(){


    for (int i = 0; i <10 ; ++i) {


        if(i==4)
            return  i;


cout<<i<<endl;

    }

    return  100;
}



int sume(){

    cout<<"tui muri kha"<<endl;

    return 1;

}
int main() {


    cout<<a()<<endl;



    if(sume() && 1)
        cout<<"bangladesj";
    else
        cout<<"error";

    return 0;
}