#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdio>
#include <limits>
#include <cstdint>


using namespace std;

int main() {



    int participate, budget, hotel, week, hotelBudget, budgetSm, available;

    while(scanf("%d %d %d %d", &participate, &budget, &hotel, &week) == 4) {

        budgetSm = 10000000;



        for (int i = 0; i < hotel; ++i) {

            int hotelArr[13];

            cin >> hotelBudget;

            for (int j = 0; j < week; ++j) {

                cin >> hotelArr[j];

            }

            sort(hotelArr, hotelArr + week, greater<int>());

            if (hotelArr[0] >= participate) {

                int temp = participate * hotelBudget;

                if(temp <= budget)
                    budgetSm = min(temp, budgetSm);

            }

        }



        if (budgetSm == 10000000) {

            cout << "stay home" << endl;
        } else
            cout << budgetSm << endl;

    }

    return 0;
}


