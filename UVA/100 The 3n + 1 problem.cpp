#include <iostream>
#include <cstdio>
#include <algorithm>
using  namespace  std;
int main() {
    int m, n;

   while (scanf("%d %d", &m, &n) == 2) {
        int cycle = 0;

        cout<<m<<" "<<n<<" ";
        if (m > n)
            swap(m,n);

        for (int i = m; i <= n; ++i) {

            int a = i;
            int count = 1;
                while(a > 1) {
                    if (a % 2 == 1)
                        a = (3 * a) + 1;
                    else
                        a = a / 2;
                    count++;
                }
                if (  cycle < count){
                    cycle = count;

                }
            }

        cout<<cycle<<endl;

    }

    return  0;
}