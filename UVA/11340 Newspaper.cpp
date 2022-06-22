#include <iostream>
#include <cstdio>
#include <map>
using  namespace std;
int main() {


    int n;
    cin>>n;

    while(n--) {
        int k;
        double totalCOst = 0;
        cin>>k;
        map<char,int> costMap;
        for (int j = 0; j < k; ++j) {
            char c;
            int cost;
            cin>>c>>cost;
            costMap[c] = cost;
        }

        int noOfLine;
        cin>>noOfLine;
        cin.ignore();
        while (noOfLine--){
            string  sLine;
            getline(cin, sLine);

            for (int j = 0; j<sLine.size(); ++j) {

                if (costMap[sLine[j]]){
                    totalCOst += costMap[sLine[j]];
                }
            }

        }

    totalCOst = totalCOst / 100.00;
    printf("%0.2lf$\n", totalCOst);

    }

    return 0;
}

