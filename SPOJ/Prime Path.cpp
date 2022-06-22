#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <utility>
#include <cstring>
#include <string>
#include <climits>
#include <algorithm>


using namespace std;
bool flag[10000] = {0};


vector< vector< int > > g(10010);
vector< int  > pv;


void primeEratosthenes(){
    bool prime[10000];

    memset(prime, true, sizeof(prime));

    for (int p = 2; p*p <10000 ; ++p) {


        if(prime[p]){


            for (int i = p*p; i <10000 ; i += p) {

                prime[i] = false;
            }

        }
    }



    for (int j = 1001; j<10000 ; ++j) {
        if(prime[j]){
            pv.push_back(j);
        }
    }
}


bool  compareDgit(int a, int b){

        string s1 = to_string(a);
        string s2 = to_string(b);

        int c=0;

    for (int i = 0; i <4 ; ++i) {

        if(s1[i] != s2[i])
            c++;
    }

    return  (c==1);
}


int  solve(int a, int b){


    if (a==b)
        return 0;


    bool visited[10000] = {0};
    int dist[10000];
    memset(dist, INT8_MAX, sizeof(dist));


    queue<int> q;

    q.push(a);

    dist[a] = 0;


    while(!q.empty()){

        int top = q.front();

        q.pop();

        if(visited[top] == true)
            continue;


        for (int i = 0; i <g[top].size() ; ++i) {

            int temp = g[top][i];

            int d =  dist[top] +1;
            if (d < dist[temp] ){
                dist[temp] = d;
                q.push(temp);
            }
        }

        visited[top] = true;

    }


    if(visited[b] != true)
        return -1;
    else
        return dist[b];

}


int main() {
    primeEratosthenes();

    for (int i = 0; i <pv.size()-1 ; ++i) {
        for (int j = i+1; j <pv.size(); ++j) {

            if(compareDgit(pv[i], pv[j])){

                g[pv[i]].push_back(pv[j]);
                g[pv[j]].push_back(pv[i]);

            }
        }

    }


    int t;
    cin>>t;

    while(t){
        int a,b;
        cin>>a>>b;
       int rtn = solve(a,b);

       if(rtn == 0)
           cout<< 0<<endl;
       else if(rtn == -1){
           cout<<"Impossible"<<endl;

       } else{
           cout<<rtn<<endl;
       }

        t--;
    }



    return 0;
}