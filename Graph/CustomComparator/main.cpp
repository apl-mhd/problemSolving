#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <queue>



using namespace std;
bool  visited[100];


struct info{

    int a,b;

    bool cmp(info a, info b){

        return a.a>b.a;
    }


}activity[5];


bool  comp( info a1,  info a2){


    return a1.a<a2.a;
}





int main() {



    pair<int, int>p[9];
    vector<pair<int, int>>graph[10];

    graph[0].push_back(make_pair(1,2));

  cout<<graph[0][0].first;







    return 0;
}