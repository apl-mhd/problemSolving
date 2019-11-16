#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <utility>
typedef long long int ll;

//#define pair<int, int> pp


using namespace std;
int main() {



    map<pair<int , int>, ll> dist;
    map<pair<int , int>, bool> allow;
    map<pair<int , int>, bool> visited;
    queue<pair<int,int>> q;



    int x0,y0,x1,y1,n;

    cin>>x0>>y0>>x1>>y1;

    cin>>n;

    for (int i = 0; i <n; ++i){

        int a, b,c;

        cin>>a>>b>>c;

        for (int j = b; j <=c; ++j) {
            allow[make_pair(a,j)]= true;
        }

    }

    allow[{x0,y0}] = true;
    allow[{x1,y1}] = true;

    q.push({x0,y0});
    dist[{x0, y0}] = 0;


    while(!q.empty()){


        pair<int, int> u = q.front();
        q.pop();


        for (int i = 0; i <8; ++i) {

            if(allow[{u.first,u.second}]);

        }



        visited[{u.first, u.second}] = true;



    }


    return 0;
}