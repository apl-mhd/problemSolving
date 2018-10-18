#include <cstdio>
#include <iostream>
#include <vector>


using namespace std;

int main() {


    vector<int> graph;


    for (int i = 0; i <10 ; ++i) {
        graph.push_back(i);
    }





    for (int i = 0; i < graph.size() ; ++i) {

        cout<<graph[i]<<" ";

    }




    return 0;
}