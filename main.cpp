#include "lev1/1_15.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

template<class T>
void vectorPrint(vector<T> v) {
    for (auto r: v) {
        cout << r << " ";
    }
    cout << endl;
}




int main() {
    int k = 4;
    int m = 3;
    vector<int> score = {4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2};
    cout << _1_15::solution(k,m,score);
    return 0;
}