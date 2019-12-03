#include <iostream>
#include <cstdio>

using namespace std;

int main() {


    bool tf= true;

    while(tf){


        int n, x, y, dx, dy;
        cin>>n;

        if (n == 0)
            break;

        cin>>dx>>dy;

        for (int i = 0; i <n; ++i) {
            cin>>x>>y;

            if( x > dx && y > dy)
                cout<<"NE"<<endl;

            else if(x < dx && y > dy)
                cout<<"NO"<<endl;

            else if(x < dx  && y < dy)

                cout<<"SO"<<endl;

            else if(x > dx && y < dy)
                cout<<"SE"<<endl;

            else

                cout<<"divisa"<<endl;

        }


    }


    return 0;
}