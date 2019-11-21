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


using namespace std;

int primeList[1010] ={0};


vector<int> adj[10000];
bool flag[10000];


void make_graph()
{
    for(int i=1001;i<10000;i++)
    {
        if(flag[i])
            continue;
        for(int j=0;j<4;j++)
        {
            int tt=pow(10,j);
            int temp=i;
            int prev,dig,next;
            prev=i/tt;
            dig=prev%10;
            prev/=10;
            next=i%tt;
            for(int k=0;k<=9;k++)
            {
                if(k==dig)
                    continue;
                int num=prev*tt*10+tt*k+next;
                if(!flag[num]){
                    adj[i].push_back(num);
                }
            }
        }
    }
}

void compute()
{
    for(int i=2;i<=100;i++)
    {
        if(!flag[i])
        {
            for(int j=i+i;j<10000;j+=i)
                flag[j]=true;
        }
    }
    make_graph();
}




bool prime(int n){


    for (int i = 2; i <=sqrt(n)+1 ; ++i) {

            if(n % i == 0){

                return false;
            }
    }


    return true;


}

int main() {




    compute();


    for (int i = 0; i <10000 ; ++i) {

       // cout<<flag[i]<<" ";
    }

    cout<<adj[1001].size()<<endl;

    vector<int>:: iterator it;

    for (it = adj[1033].begin(); it != adj[1033].end(); ++it) {

        cout<<*it<<" ";
    }



/*

    int a  = sqrt(100);

    cout<<a<<endl;


    int count =0;
    for (int i = 1000; i <=9999 ; ++i) {

            if(prime(i)){

                primeList[count] = i;
                cout<<i<<" ";
                count++;
            }
    }

    cout<<endl<<count<<endl;

*/


    return 0;
}