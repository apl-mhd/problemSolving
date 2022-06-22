#include <iostream>
#include <map>

using  namespace  std;

int main() {


    map<char, int> charmap;

    charmap['A'] = 2;
    charmap['B'] = 2;
    charmap['C'] = 2;

    charmap['D'] = 3;
    charmap['E'] = 3;
    charmap['F'] = 3;


    charmap['G'] = 4;
    charmap['H'] = 4;
    charmap['I'] = 4;

    charmap['J'] = 5;
    charmap['K'] = 5;
    charmap['L'] = 5;

    charmap['M'] = 6;
    charmap['N'] = 6;
    charmap['O'] = 6;

    charmap['P'] = 7;
    charmap['Q'] = 7;
    charmap['R'] = 7;
    charmap['S'] = 7;

    charmap['T'] = 8;
    charmap['U'] = 8;
    charmap['V'] = 8;

    charmap['W'] = 9;
    charmap['X'] = 9;
    charmap['Y'] = 9;
    charmap['Z'] = 9;




    string  phoneNume;

    while (getline(cin, phoneNume)) {
        for (int i = 0; i < phoneNume.size(); ++i) {

            if (charmap[phoneNume[i]] != 0)

                cout << charmap[phoneNume[i]];
            else
                cout << phoneNume[i];
        }

        cout<<endl;
    }


    return 0;
}
