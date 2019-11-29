#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <climits>

using  namespace std;


vector< vector< int > > g(2000);
bool  visited[2000] = {false};
long long  dist[2000] = {INT8_MAX};
int  parent[2000];


void  init(int n){

memset(parent, -1, sizeof(parent));

    for (int i = 0; i <n; ++i) {

        for (int j = 0; j <n ; ++j) {

            int a;

            cin>>a;
            g[i].push_back(a);
        }
    }

}

void solve(){

    queue< int > q;

    q.push(0);

    visited[0] = true;
    while(!q.empty()){

        int u = q.front();
        q.pop();

        for (int i = 0; i <g[u].size(); ++i) {

            int v = g[u][i];


            if( !visited[v]){

                q.push(v);

                parent[v] = u;

                if( u == v){
                    dist[v] = 1;

                } else if(parent[v] )





            }

        }


    }

}

int main() {





    int n;
    cin>>n;
    init(n);

    /*for (int i = 0; i <n ; ++i) {

        cout<<i<<" :";
        for (int j = 0; j <n ; ++j) {

            cout<<g[i][j]<<" ";
        }

        cout<<endl;
    }*/

    return 0;
}