#include "lev1/1_12.h"

#include <iostream>

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}

int main() {
    string s = "abracadabra";
    cout<<_1_12::solution(s);
    return 0;
}