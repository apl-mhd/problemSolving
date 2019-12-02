#include <iostream>
#include <cstdio>

using namespace std;
int main() {


    int n;
    cin>>n;

    int a = n/2;
    int b = n%2;


    if(b == 0){

        cout<< a<<endl;
        for (int i = 0; i <a ; ++i) {
            cout<<2<<" ";
        }
        cout<<endl;

    } else{

        cout<<a<<endl;

        for (int i = 1; i <a ; ++i) {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }




    //if(b == 1 )
      //




    return 0;
}