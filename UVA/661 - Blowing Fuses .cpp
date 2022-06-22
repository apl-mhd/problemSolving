#include <iostream>


using  namespace  std;

int main() {


    int n, m, c;
    int a = 1;
    while (scanf("%d %d %d", &n,&m,&c) != EOF){

        if (n==0 && m==0 && c==0)
            break;


        bool state[21] = {false};
        int load[21] = {0};
        int sum = 0;
        int maxLoad =0;
        bool  flag = true;

        for (int i = 1; i <=n ; ++i)
            cin>>load[i];

        for (int i = 1; i <=m ; ++i) {
            int t;
            cin>>t;
            if (state[t] == false){
                sum += load[t];
                state[t] = !state[t];
            }
            else{
                sum -= load[t];
                state[t] = !state[t];
            }


            if(sum > c){
                flag = false;

            } else if (maxLoad < sum){
                maxLoad = sum;
            }
        }

        if (flag == true) {
            cout<<"Sequence "<<a<<endl;
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<< maxLoad <<" amperes."<<endl<<endl;

        }
        else{
            cout<<"Sequence "<<a<<endl;
            cout<<"Fuse was blown."<<endl<<endl;
        }
        a +=1;
    }


    return 0;
}

