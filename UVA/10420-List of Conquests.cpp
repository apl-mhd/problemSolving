#include <iostream>
#include <cstdio>
#include <map>

using namespace  std;



int main() {


    map<string, int> country;




    int n;
    cin>>n;
    cin.ignore();

    while (n--){
        string stringIn;
        string  temp;
        getline(cin, stringIn);
        int i = 0;
       while (stringIn[i] != ' '){

           temp +=stringIn[i];
            i++;
      }

      country[temp] +=1;

    }

    for (auto i = country.begin(); i != country.end() ; ++i) {

        cout<< i->first<<" "<<i->second<<endl;
    }







    return 0;
}
