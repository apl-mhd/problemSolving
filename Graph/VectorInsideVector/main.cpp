#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <utility>
#include <queue>

     // std::pair


using namespace std;

int main() {

    vector<pair<int,int>>a;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>b;

    b.push(make_pair(50,4));
    b.push(make_pair(6,3));
    b.push(make_pair(7,2));
    b.push(make_pair(60,1));


    while(!b.empty()){

        pair<int,int>p;

        p = b.top();
        b.pop();

        cout<<p.first<<" "<<p.second<<endl;

    }







    return 0;
}