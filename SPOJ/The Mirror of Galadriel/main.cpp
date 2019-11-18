#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <utility>
#include <cstring>

using  namespace std;

bool  solve(){

    string s;

    cin>>s;

    int i,j;
    i=0;
    j= s.size()-1;

    while (i<j){

        if(s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;


}


int main() {


    int n;
    cin>>n;

    while(n){

        if(solve())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        n--;
    }


    return 0;
}