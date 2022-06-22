#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <vector>
#include <climits>
#include <algorithm>

#define MAX 100
using namespace std;

queue<int>q;
vector<int>list[MAX];
vector<int>::iterator it;
bool visited[MAX];



void visit(int v){


    for(int i=0; i<v; i++){
        visited[i] = false;

    }

}

void printGraph(int u){



    for(int i=0; i<u; i++){
        cout<<i<<": ";

        for (int j = 0; j <list[i].size() ; ++j) {

            cout<<list[i][j]<<" ";

        }

        cout<<endl;
    }

}



void graphInput(int node, int edge){

    visit(node);

    int u, v;

    for(int i=0; i<edge; i++) {

        cin >>u>>v;

        list[u].push_back(v);
        list[v].push_back(u);


    }

    //printGraph(u);
}

int  BFS(int v){


    int max = -1;

    int counnectedCompo=0;
    int count =0;
    for (int j = 0; j <v ; ++j) {


        if(!visited[j]) {

            count ++;

            visited[j]= true;


            for (int i = 0; i < list[j].size(); ++i) {

                int a = list[j][i];


                if (!visited[a]){


                    visited[a] = true;
                }


            }
        }
    }

    return count;

}

int compSize;


int mxx =-9;


void dfsVisit( int v){

    visited[v] = true;

   int   compSize=1;

    for(int i=0; i<list[v].size(); i++){

        int a = list[v][i];
        if(visited[a] == false) {

            compSize++;
            dfsVisit(a);

        }

    }

    mxx = max(mxx,compSize);

}


int   dfs(int v){

    int ccomp=0;

    for (int i = 0; i <v ; ++i) {

        if(visited[i] == false) {

            ccomp++;
            dfsVisit(i);


        }

    }

    return ccomp;

}




int main() {


    freopen("input.txt","r",stdin);

    int a,b;
    cin>>a>>b;
    graphInput(a,b);

   // printGraph(a);

    cout<<endl;

   cout<< dfs(a)<<endl<<endl;
    cout<<mxx<<endl<<endl;

    for (int j = 0; j <a ; ++j) {

        cout<<j<<" "<<visited[j]<<endl;

    }


        return 0;
}