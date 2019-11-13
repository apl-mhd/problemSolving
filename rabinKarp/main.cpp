//Implementation of Rabin Carp String Matching Algorithm
//https://github.com/Shafaet/Programming-Contest-Algorithms/blob/master/Useful%20C%2B%2B%20Libraries/rabin-carp.cpp
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <cmath>
#include <map>

using namespace std;
typedef  long long  i64;

#define  d 256
#define  prime 3

//a b c d e f

//text hash : 2058 original 1268

//abc =1282

i64 createHash(const string &text, int m){


    i64  hash =0;
    for (int i = 0; i <m ; ++i) {

        hash = hash + text[i] * pow(prime, i);

    }

    return  hash;

}

i64 reCalHash(const string txt, i64 oldHash, int start, int end, int patternLen){

    //cout<<"start: "<<start<<"end :"<<end<<endl;



        i64  newHash = (oldHash - txt[start]) / prime;
        newHash = newHash + txt[end] * pow(prime, patternLen-1);

    return  newHash;


}


int stringMatch(const string &text, const string &pattern){


    int n = text.size(); //text size for text
    int m = pattern.size();  //text size for pattern

    i64 patternHash = createHash(pattern,m); //hash value for pattern;
    i64 textHash = createHash(text,m); //hash value for text;




    for (int k = 0; k <= n-m ; ++k)
    {




        if(patternHash == textHash)
        {

            cout<<k<<" "<<patternHash<<endl;
        }

            if (k < n-m)
            {

                textHash = reCalHash(text,textHash, k, k+m, m);
                cout<<"text hash : "<<textHash<<endl;

            }

    }


    return  0;

}


int main() {




    stringMatch("abcabc", "abc");

    return 0;
}