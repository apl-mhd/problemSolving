#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Graph{


public:
    Graph();

    void show();
    void display(){

        cout<<"this is display"<<endl;
    }


};



Graph::Graph(){

    cout<<"bangladesh"<<endl;

}

void Graph::show(){

    cout<<"This is show"<<endl;

}



int main() {


    Graph ob[10];

    ob[0].show();
    ob[0].display();





    return 0;
}