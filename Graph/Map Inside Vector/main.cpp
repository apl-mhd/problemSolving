#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <utility>      // std::pair
#include <queue>

using namespace std;

int main() {



    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>b;

    priority_queue<int, vector<int>, greater<int>> a;

    a.push(20);
    a.push(10);
    a.push(1);


    //cout<<"aa";

    while( !a.empty()){

      //  cout<<a.top()<<endl;

        a.pop();

    }


    b.push(make_pair(1,10));
    b.push(make_pair( 1,9));
    b.push(make_pair(1,8));

    while(!b.empty()){

        pair<int,int> m;
        m = b.top();
        cout<<m.first<<" "<<m.second<<endl;
        b.pop();
    }



//    priority_queue<vector<int>, vector<int>, greater<vector<int>>>b;



    //b.push(make_pair(10,20));







    return 0;
}