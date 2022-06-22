#include <iostream>
#include <cstdio>

using namespace  std;

int main() {

    string text;

    while(getline(cin, text)){
        int  start = 0;
        for (int i = 0; i <text.size() ; ++i) {

            if (text[i] == ' '){

                int end = i-1;

                for (int j = end; j>=start; j--) {
                    cout<< text[j];
                }
                start = i+1;
                cout<<" ";
            }

            else if (i == text.size()-1){

                int end = i;

                for (int j = end; j>= start ; j--) {

                    cout<<text[j];
                }
            }
        }

        cout<<endl;
    }

    return 0;
}



