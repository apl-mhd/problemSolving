#include <iostream>
#include<cstdio>
#include <vector>
#include <queue>
using namespace std;
#define MAX_N 101


int m,n;
int  sum=0;
vector<vector<int>> adj;


int visit[100];

void init(){

    for (int i = 0; i <100 ; ++i) {

        visit[i]=0;
    }

}

int  ccompo(int s,int x){


    visit[s]=1;

    for (int i = 0; i <adj[s].size(); ++i) {

        int e =  adj[s][i];

        if(visit[e] == 0){

          //  cout<<e;

            sum = sum+1;
             x = 1+ ccompo(e,x);


        }

    }


    return  x;

}


int main() {


    freopen("graph.txt","r",stdin);
    cin>>n>>m;
    adj.resize(100);

    for (int i = 0; i <m ; ++i) {

        int u,v;

        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    init();

    for (int j = 0; j <n ; ++j) {
        for (int i = 0; i <adj[j].size() ; ++i) {
            cout<<j<<" "<<adj[j][i]<<endl;
        }

    }

    cout<<ccompo(0,2)<<endl;

    cout<<sum;


    return 0;
}