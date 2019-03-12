#include <cstring>
#include <cstdio>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>
#include <climits>
#include <iostream>

using  namespace std;

int main() {





    map<int, int>chapter;
    map<int, int>::iterator itr;


    int n,a,b,c;

    cin>>n;

    int i=1;

    for (int i = 0; i <n; ++i) {

        cin>>a>>b;

        chapter[a] = b;

    }
    cin>>c;



    for (itr = chapter.begin(); itr != chapter.end(); ++itr) {




        if(itr->second == c){

            n = n-i+1;
            break;

        }

        if( c >= itr->first && c<itr->second){
            n = n - i + 1;
            break;

    }


        i++;


    }

    cout<<n;


        return 0;
}