#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include "lev1/1_8.h"

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}



int main() {
    string s = "aukks";
    string skip = "wbqd";
    int index = 5;
    cout << _1_8::solution(s,skip,index);
    return 0;
}