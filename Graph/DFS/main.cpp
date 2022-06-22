#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <queue>
#include <stack>
using namespace std;
bool  visited[100];


void  graphInput(vector<int> graph[],int u, int v){

    graph[u].push_back(v);
    graph[v].push_back(u);


}

void bfs(vector<int>graph[]){



    int index;

    stack<int> q;

    q.push(0);


    while(!q.empty()){

        index = q.top();

        q.pop();
        visited[index] = true;

         cout<<index<<" ";

        for(int i=0; i<graph[index].size(); i++){

            if(visited[graph[index][i]] != true){
                q.push(graph[index][i]);

                ///cout<<graph[index][i]<<" ";


            }



        }

        cout<<endl;


    }

}


int main() {


    vector<int>graph[8];

    bool  visited[100];

    for(int i =0; i<100; i++){

        visited[i] = false;

    }


    graphInput(graph, 0,1);
    graphInput(graph, 0,2);
    graphInput(graph, 0, 7);
    graphInput(graph, 1,3);
    graphInput(graph, 1,4);
    graphInput(graph, 2,5);
    graphInput(graph, 2,6);

    bfs(graph);



    return 0;
}