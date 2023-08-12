#include "lev1/1_11.h"

#include <iostream>
#include <string>

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}



int main() {
    string s = "banana";
    vectorPrint(_1_11::solution(s));
    return 0;
}