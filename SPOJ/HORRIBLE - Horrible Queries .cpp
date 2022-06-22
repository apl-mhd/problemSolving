#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
using namespace std;

#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
#define re return
#define QI queue<int>
#define SI stack<int>
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define ms(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))
#define II ( { int a ; read(a) ; a; } )
#define LL ( { Long a ; read(a) ; a; } )
#define DD ({double a; scanf("%lf", &a); a;})

double const EPS=3e-8;
using namespace std;

#define FI freopen ("t.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)

typedef long long int ll;
typedef unsigned long long ull;
typedef vector<int> vi ;
typedef set<int> si;
typedef vector<ll>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<ll,ll>pll;
typedef pair<double,double>pdd;
typedef vector<pii> vpii;

#define  maxSize 100010


struct info{

    ll sum =0;
    ll prop =0;

}*tree;


void  update(int node, int b, int e, int i, int j, ll value){

        if(j < b ||  i > e)
            return;

        if(b >=i && e<=j){
            tree[node].prop += value;
            tree[node].sum += ((e -b +1) * value);
            return;
        }

        update(node*2, b, (b+e)/2 , i, j, value);
        update(node*2+1, (b + e)/2+1, e,  i, j, value);

        tree[node].sum = tree[node*2].sum + tree[node*2+1].sum + (e-b + 1)*tree[node].prop;

}


ll query(int node, int b, int e, int i, int j, ll c=0){

    if(j < b ||  i > e)
        return 0;

    if(b >=i && e<=j){
        return tree[node].sum  + (c * (e - b + 1));
    }

    return  query(node*2, b, (b+e)/2, i, j, c+tree[node].prop)+ query(node*2+1, (b+e)/2+1, e, i, j, c+tree[node].prop);

}



int main() {

    int t;
    cin>>t;

    while(t){

        int n,q;
        cin>>n>>q;
        tree = new info[4*n+1];

        for (int i = 0; i <q ; ++i) {
            int a, b, c,d;

            cin>>a>>b>>c;

            if(a == 0){
                cin>>d;

                update(1, 1, n, b, c, d);

            }
            else{

                cout<<query(1, 1, n, b, c)<<endl;
            }

        }

        t--;
    }

    return 0;
}