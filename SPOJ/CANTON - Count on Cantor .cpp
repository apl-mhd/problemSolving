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

using namespace std;
#define opt ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define lli long long int

int main() {


        opt;
        lli t;
        cin>>t;
        while(t--)
        {
            lli n;
            cin>>n;
            lli a,b,c,ans1,ans2,ans3;
            float a1,b1,c1;
            a1=sqrt(8*n+1);
            a=ceil(a1);
            b1=(a-1)/(2*1.0);
            b=ceil(b1);
            if(b%2==0)
            {
                ans1=b;
                ans2=b;
                c=((b)*(b+1))/2;
                ans3=c-n;
                ans1=ans1-ans3;
                ans2=ans2-(b-ans3)+1;
                cout<<"TERM "<<n<<" IS "<<ans1<<"/"<<ans2<<"\n";
            }
            else
            {
                ans1=b;
                ans2=b;
                c=((b)*(b+1))/2;
                ans3=c-n;
                ans1=ans1-(b-ans3)+1;
                ans2=ans2-ans3;
                cout<<"TERM "<<n<<" IS "<<ans1<<"/"<<ans2<<"\n";
            }
        }
        return 0;
}