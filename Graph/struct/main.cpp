#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <climits>
#include <utility>
#include <map>
#define MAX_SZ 100

using namespace std;


struct A{

int a, b,c;
    bool operator<(const A& rhs) const
    {
        return a > rhs.a;
    }

};

struct  B{

    int a,b,c;

    bool  operator<(const A& rhs) const {

    }
};
bool cmp(A one, A two)
{
    return one.a<two.a;

}


int main() {


    priority_queue<A>q;

    A temp;
    temp.a =100;

    q.push(temp);
    temp.a =10;
    q.push(temp);
    temp.a =1;

    q.push(temp);


    while(!q.empty()){
        temp = q.top();

        cout<<temp.a<<" ";
        q.pop();

    }




    return 0;
}