#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>



using namespace std;
#define pb push_back

typedef vector<int> vi;




int main() {

    vi v = { 10, 9, 8, 7, 6, 5, 4, 3, 2};

    vi::iterator it;



    sort(v.begin(), v.begin()+3);

    for (it = v.begin(); it !=v.end(); it++) {

        cout<<*it<<" ";
    }






    return 0;
}