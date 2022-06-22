#include <iostream>
#include <cstdio>
#include <string>

using  namespace std;
int main() {



    string  name, input, temp;
    bool flag = true;
    int n;

    while (getline(cin, input)){

        for (int i = 0; i <input.size() ; ++i) {

            if (input[i] == '"') {
                if (flag == true) {
                    //temp += "``";
                    cout<<"``";
                    flag = false;
                } else {

                    //temp += "''";
                    cout<<"''";
                    flag = true;
                }
            }
            else

                // temp += input[i];
                cout<<input[i];
        }

        cout<<endl;

    }


    return 0;
}

