#include <iostream>
#include <cstdio>
#include <map>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    stack<int>  st;


    cout<<"stack\n";
    for (int i = 0; i < 10 ; ++i) {
        st.push(i);

    }

   while(!st.empty()){
        cout<<st.top();
        st.pop();
    }


   cout<<"\nqueue\n";
   queue<int> q;
    for (int i = 0; i < 10 ; ++i) {
        q.push(i);

    }

    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }

    cout<<"\nMap\n";



    map<int,int> m;

    map<int,int>::iterator it;


    for (int i = 0; i < 10 ; ++i) {
        m[i] = i;

    }

    for (it = m.begin(); it !=m.end(); it++) {

        cout<<it->first<<" "<<it->second<<endl;

    }


    cout<<"\nVector\n";

    vector<int> v;

    vector<int>::iterator vit;

    for (int i = 0; i < 10 ; ++i) {
        v.push_back(i);

    }


    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i];

    }
    cout<<"\n";

    for(vit = v.begin(); vit != v.end(); vit++){

        cout<< *vit;
    }



    cout<<"\nArray sort\n";



    int ar[] = {10,20,40,50,2};
    cout<< sizeof(ar)/ar[0]<<endl;



    sort(ar, ar+5);

    for(int i=0; i<5; i++){

        cout<<ar[i]<<" ";

    }


    cout<<"\n";














    return 0;
}