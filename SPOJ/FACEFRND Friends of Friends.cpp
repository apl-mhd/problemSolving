
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <cstdio>

using namespace std;
int main() {
    unordered_set< int > s;


int n;

cin>>n;

for (int i = 0; i < n; ++i) {

        int a, m;
        cin>>a>>m;

        s.insert(a);


        for (int j = 0; j <m ; ++j) {

            int b;
            cin>>b;
            s.insert(b);
        }

    }


    cout<<s.size()-n;
    return 0;
}



