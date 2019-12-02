#include <iostream>
#include <cstdio>
using namespace std;



int solve(){


    int c,v0,v1,a,l;
    cin>>c>>v0>>v1>>a>>l;

    int sum = v0;

    if( c <= sum){

        return 1;
    }



int i=1;


    while(i){

        int temp = v0 +  i * a;

        temp = min(temp, v1);
        sum += temp -l;

        if(c <= sum)
            return i+1;

    i++;


    }

}


int main() {


    cout<<solve()<<endl;


    return 0;
}